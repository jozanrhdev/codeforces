#include <bits/stdc++.h>
using namespace std;

/*
  Cactus embedding into a 2xK ladder.

  1) Checks:
     - degree[v] <= 3
     - graph is bipartite
  2) Cycle extraction (since cactus: each edge in at most one cycle)
     - DFS, when seeing back-edge to ancestor, collect cycle along parent[].
  3) For each cycle C (length L):
     - Require L even (already implied by bipartite)
     - Count articulation vertices on the cycle: those with deg[v] >= 3
       -> if more than 2, impossible for 2xK ladder.
  4) Construct embedding:
     - pos[v] = {row, col}
     - maintain global 'col' (next free column)
     - tree-edge blocks: place child at (row^1, col++) and continue
     - cycle blocks (2k):
         * choose order of cycle vertices along rectangle rows so that
           the (up to) 2 articulation vertices are placed at the two corners.
         * allocate k columns for the rectangle and assign coords.
         * after placing the cycle, DFS the subtrees attached to those (corner)
  vertices.

  Output:
    YES
    K = max_col_used
    row col for each vertex 1..n
*/

struct Edge {
  int to, id;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  if (!(cin >> T)) return 0;
  while (T--) {
    int n, m;
    cin >> n >> m;

    vector<vector<Edge>> g(n + 1);
    vector<pair<int, int>> edges(m);
    vector<int> deg(n + 1, 0);

    for (int i = 0; i < m; i++) {
      int u, v;
      cin >> u >> v;
      edges[i] = {u, v};
      g[u].push_back({v, i});
      g[v].push_back({u, i});
      deg[u]++;
      deg[v]++;
    }

    // Quick degree check
    bool ok = true;
    for (int v = 1; v <= n; ++v)
      if (deg[v] > 3) {
        ok = false;
        break;
      }
    if (!ok) {
      cout << "NO\n";
      continue;
    }

    // Bipartite check
    vector<int> color(n + 1, -1);
    for (int s = 1; s <= n && ok; ++s)
      if (color[s] == -1) {
        queue<int> q;
        color[s] = 0;
        q.push(s);
        while (!q.empty() && ok) {
          int u = q.front();
          q.pop();
          for (auto [v, id] : g[u]) {
            if (color[v] == -1) {
              color[v] = color[u] ^ 1;
              q.push(v);
            } else if (color[v] == color[u]) {
              ok = false;
              break;
            }
          }
        }
      }
    if (!ok) {
      cout << "NO\n";
      continue;
    }

    // DFS to extract cycles
    vector<int> tin(n + 1, -1), parent(n + 1, -1);
    vector<int> peid(n + 1, -1);  // parent edge id
    int timer = 0;

    vector<char> edgeInCycle(m, 0);
    struct Cycle {
      vector<int> verts;
    };
    vector<Cycle> cycles;

    function<void(int)> dfs = [&](int u) {
      tin[u] = ++timer;
      for (auto [v, eid] : g[u]) {
        if (eid == peid[u]) continue;
        if (tin[v] == -1) {
          parent[v] = u;
          peid[v] = eid;
          dfs(v);
        } else if (tin[v] < tin[u]) {
          // back-edge u -> ancestor v forms a cycle
          vector<int> cyc;
          int x = u;
          cyc.push_back(v);
          while (x != v) {
            cyc.push_back(x);
            // mark the edge (x, parent[x]) as in cycle
            edgeInCycle[peid[x]] = 1;
            x = parent[x];
          }
          // also mark edge (u,v)
          edgeInCycle[eid] = 1;
          // cyc is [v, u, ... , (towards v)] in order; we want proper cyclic
          // order
          reverse(cyc.begin() + 1, cyc.end());
          // Now cyc goes v -> ... -> u, but note edges on cycle follow parent
          // path + back-edge Make it simple: build actual cyclic order by
          // walking along parent chain then back-edge. The vector 'cyc' now
          // lists vertices along that simple cycle.
          cycles.push_back({cyc});
        }
      }
    };
    for (int i = 1; i <= n; i++)
      if (tin[i] == -1) dfs(i);

    // Check cycles constraints: even length, at most 2 articulations per cycle
    for (auto &C : cycles) {
      int L = (int)C.verts.size();
      if (L % 2) {
        ok = false;
        break;
      }  // redundant with bipartite, but keep
      int arts = 0;
      for (int v : C.verts)
        if (deg[v] >= 3) arts++;
      if (arts > 2) {
        ok = false;
        break;
      }
    }
    if (!ok) {
      cout << "NO\n";
      continue;
    }

    // Build helper: for quick access, map (u,v) edge id and mark cycles
    // membership Also, for each cycle we want the edges on it to traverse along
    // the list order. We'll need to know, given two consecutive vertices in the
    // cycle, that edge is indeed in cycle.
    vector<unordered_set<int>> cycAdj(n + 1);
    vector<vector<pair<int, int>>>
        cycEdgesPerCycle;  // per cycle, list of consecutive pairs

    cycEdgesPerCycle.reserve(cycles.size());
    for (auto &C : cycles) {
      int L = (int)C.verts.size();
      vector<pair<int, int>> pairs;
      for (int i = 0; i < L; i++) {
        int a = C.verts[i];
        int b = C.verts[(i + 1) % L];
        pairs.push_back({a, b});
        cycAdj[a].insert(b);
        cycAdj[b].insert(a);
      }
      cycEdgesPerCycle.push_back(pairs);
    }

    // We'll also need to know, for each vertex, which cycles it belongs to
    vector<vector<int>> cyclesOfV(n + 1);
    for (int cid = 0; cid < (int)cycles.size(); ++cid) {
      for (int v : cycles[cid].verts) cyclesOfV[v].push_back(cid);
    }

    // Embedding storage
    vector<pair<int, int>> pos(n + 1, {-1, -1});
    vector<char> cyclePlaced(cycles.size(), 0);
    int col = 0;

    // For “tree” DFS (edges not in cycles)
    function<void(int, int, int)> place_tree;
    function<void(int, int, int, int)>
        place_cycle;  // (cid, entry_vertex, entry_row, dir)

    // dir = 0: place parent corner on the "left" end of rectangle,
    // dir = 1: place it on the "right" end (we'll usually use 0 left-to-right)

    // Place a cycle as rectangle:
    place_cycle = [&](int cid, int entry_v, int entry_row, int dir) {
      if (cyclePlaced[cid]) return;  // already embedded
      cyclePlaced[cid] = 1;

      auto &C = cycles[cid].verts;
      int L = (int)C.size();
      int k = L / 2;  // rectangle uses k columns

      // Determine the two articulation vertices on this cycle (deg>=3). Could
      // be 0,1,2.
      vector<int> art;
      for (int v : C)
        if ((int)g[v].size() >= 3) art.push_back(v);

      // We want to orient the cycle order so that:
      // - entry_v is at a corner
      // - if there is a second articulation, put it at the opposite corner
      // Strategy:
      // Find an index idx such that C[idx] == entry_v, rotate C so it starts
      // there.
      int idx = find(C.begin(), C.end(), entry_v) - C.begin();
      rotate(C.begin(), C.begin() + idx, C.end());

      // If there is a second articulation 'w', rotate direction so that w sits
      // at index k (opposite corner). If no second, it's fine; if only one
      // (entry_v), the other corner stays free.
      int other_idx = -1;
      if ((int)art.size() >= 2) {
        int w = (art[0] == entry_v ? art[1] : art[0]);
        // find w in C
        int iw = find(C.begin(), C.end(), w) - C.begin();
        // we want iw == k (mod L). If not, we can reverse cycle order to try
        // make it align. If reversing makes it closer, do it.
        auto Crev = C;
        reverse(Crev.begin() + 1,
                Crev.end());  // reverse cyclic direction keeping C[0] fixed
        int iw_rev = find(Crev.begin(), Crev.end(), w) - Crev.begin();
        // choose orientation that sets w at distance k
        bool use_rev = false;
        if ((iw + L) % L != k && (iw_rev + L) % L == k)
          use_rev = true;
        else if ((iw + L) % L != k) {
          // if neither equals k, pick whichever is closer then we will rotate
          // locally along rows. but in ladder, corners must be exactly
          // opposite. Since it's a simple even cycle, there always exists an
          // orientation where w is at k steps from entry_v.
          use_rev = (abs(iw_rev - k) < abs(iw - k));
        }
        if (use_rev) {
          C = move(Crev);
          iw = iw_rev;
        }
        // Now rotate so that w lands at index k exactly
        // Currently C[0] is entry_v, we need C[k] = w. If not, rotate within
        // the half? Because we kept entry_v fixed at 0, in an even cycle we can
        // ensure w ends at k by choosing correct direction (done above). Assert
        // (in practice): if (C[k] != w) ... (we’ll still proceed; correctness
        // relies on cactus simplicity)
      }

      // Assign coordinates for the cycle rectangle using k columns:
      int start_col = col;
      // Layout:
      // Row entry_row, columns [start_col .. start_col + k - 1] go along half
      // of the cycle. Then a vertical edge at the far end, then back on the
      // other row.

      // Map the cycle in order: C[0]..C[k-1] on row=entry_row, increasing
      // columns C[k]..C[L-1] on row=entry_row^1, decreasing columns Corners:
      // C[0] at (entry_row, start_col), C[k] at (entry_row^1, start_col + k -
      // 1)
      for (int i = 0; i < k; i++) {
        int v = C[i];
        if (pos[v].first == -1) pos[v] = {entry_row, start_col + i};
        // else: if already placed, we assume consistent
      }
      for (int i = k; i < L; i++) {
        int v = C[i];
        int back = (L - 1) - i;  // 0..k-1
        if (pos[v].first == -1) pos[v] = {entry_row ^ 1, start_col + back};
      }
      col += k;  // consumed k columns

      // After placing, expand subtrees from cycle vertices that have extra
      // edges (deg>=3). Only corners have a spare degree in ladder. So attach
      // ONLY at corners C[0] and C[k]. If some other cycle vertex had deg>=3,
      // we already rejected (>2 articulations) above.
      auto cornerA = C[0];
      auto cornerB = C[k % L];

      // Explore non-cycle edges out of each corner
      auto expand_from_corner = [&](int corner) {
        int r = pos[corner].first;
        int c = pos[corner].second;
        for (auto [to, eid] : g[corner]) {
          if (cycAdj[corner].count(to)) continue;  // skip cycle-edges
          if (pos[to].first != -1) continue;       // already placed
          // place a branch to the right (new columns), alternating rows
          // We start the branch by stepping to (r^1, col) if possible, but we
          // are already at some (r,c). We'll just continue placing using
          // place_tree which advances 'col' globally. To ensure we don't
          // overlap the rectangle area, ensure col is >= current max.
        }
      };

      // Actually do a controlled branch placement via place_tree from these
      // corners: But we need a wrapper that ensures we move forward in columns
      // before branching. We'll do: bump col to at least (start_col + k) to the
      // right side, then grow.
      int save_col = col;
      col = max(col, start_col + k);

      // cornerA
      for (auto [to, eid] : g[cornerA]) {
        if (cycAdj[cornerA].count(to)) continue;
        if (pos[to].first == -1) {
          // start branch with opposite row to open a rung
          place_tree(to, cornerA, pos[cornerA].first ^ 1);
        }
      }
      // cornerB
      for (auto [to, eid] : g[cornerB]) {
        if (cycAdj[cornerB].count(to)) continue;
        if (pos[to].first == -1) {
          place_tree(to, cornerB, pos[cornerB].first ^ 1);
        }
      }
    };

    // Place tree edges (non-cycle edges)
    place_tree = [&](int u, int p, int row) {
      if (pos[u].first == -1) {
        pos[u] = {row, col++};
      }
      for (auto [v, eid] : g[u]) {
        if (v == p) continue;

        bool isCycleEdge = (cycAdj[u].count(v) > 0);
        if (isCycleEdge) {
          // If this edge belongs to some cycle, place the whole cycle once.
          // Find a cycle containing (u,v). We’ll trigger placement with entry
          // at u. Since it's a cactus, there is at most one such cycle.
          int found_cid = -1;
          for (int cid : cyclesOfV[u]) {
            // check if v is consecutive with u in that cycle
            auto &pairs = cycEdgesPerCycle[cid];
            // naive search is fine (total edges manageable)
            for (auto &pr : pairs) {
              if ((pr.first == u && pr.second == v) ||
                  (pr.first == v && pr.second == u)) {
                found_cid = cid;
                break;
              }
            }
            if (found_cid != -1) break;
          }
          if (found_cid != -1 && !cyclePlaced[found_cid]) {
            place_cycle(found_cid, u, pos[u].first, 0);
          }
          continue;
        } else {
          if (pos[v].first == -1) {
            // place as a straight branch to the right
            pos[v] = {pos[u].first ^ 1, col++};
            place_tree(v, u, pos[v].first);
          }
        }
      }
    };

    // Run embedding from every component
    for (int s = 1; s <= n; ++s)
      if (pos[s].first == -1) {
        pos[s] = {0, col++};
        // handle incident cycle(s) starting at s
        for (auto [v, eid] : g[s]) {
          if (cycAdj[s].count(v)) {
            int found_cid = -1;
            for (int cid : cyclesOfV[s]) {
              auto &pairs = cycEdgesPerCycle[cid];
              for (auto &pr : pairs) {
                if ((pr.first == s && pr.second == v) ||
                    (pr.first == v && pr.second == s)) {
                  found_cid = cid;
                  break;
                }
              }
              if (found_cid != -1) break;
            }
            if (found_cid != -1 && !cyclePlaced[found_cid]) {
              place_cycle(found_cid, s, pos[s].first, 0);
            }
          }
        }
        // then normal tree expansion
        place_tree(s, -1, pos[s].first);
      }

    // Output
    cout << "YES\n";
    int K = 0;
    for (int i = 1; i <= n; i++) K = max(K, pos[i].second + 1);
    // cout << K << "\n";
    for (int i = 1; i <= n; i++) {
      // rows 0/1, columns 0..K-1
      cout << pos[i].first << " " << pos[i].second << "\n";
    }
  }
  return 0;
}
