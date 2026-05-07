#include <bits/stdc++.h>
using namespace std;

#define ar array
const int INF = 1e9;

void solve() {
  int n, m, k;
  cin >> n >> m >> k;
  string s;
  cin >> s;
  s = "L" + s + "L";  // orillas
  int N = n + 2;

  const int INF = 1e9;
  vector<int> dist(N, INF);
  vector<char> seen(N, 0);

  // posiciones disponibles (no 'C'), que aún no hemos consumido
  set<int> avail;
  for (int i = 1; i < N; ++i)
    if (s[i] != 'C') avail.insert(i);

  deque<int> dq;
  dist[0] = 0;
  dq.push_front(0);

  bool ok = false;
  while (!dq.empty()) {
    int u = dq.front();
    dq.pop_front();
    if (seen[u]) continue;
    seen[u] = 1;

    if (dist[u] > k) continue;  // límite de nado
    if (u == N - 1) {
      ok = true;
      break;
    }  // llegamos a la orilla derecha

    // ya no necesitamos que otros intenten "consumir" u
    if (avail.count(u)) avail.erase(u);

    if (s[u] == 'W') {
      int v = u + 1;
      if (v < N && s[v] != 'C' && dist[u] + 1 < dist[v]) {
        dist[v] = dist[u] + 1;
        dq.push_back(v);  // arista de peso 1
      }
    } else {  // 'L' o tronco
      int R = min(N - 1, u + m);
      auto it = avail.lower_bound(u + 1);
      while (it != avail.end() && *it <= R) {
        int v = *it;
        it = avail.erase(it);  // cada índice se consume una vez
        if (dist[u] < dist[v]) {
          dist[v] = dist[u];
          dq.push_front(v);  // arista de peso 0
        }
      }
    }
  }
  cout << (ok ? "YES\n" : "NO\n");
  // string s;
  // cin >> s;
  // s = "L" + s + "L";  // agregar orillas

  // vector<int> min_swim(n + 2, INF);
  // deque<ar<int, 2>> q;

  // min_swim[0] = 0;
  // q.push_front({0, 0});  // pos, swim

  // while (!q.empty()) {
  //   auto [pos, swim] = q.front(); q.pop_front();
  //   if (s[pos] == 'C') continue;

  //   // Ya no podemos nadar
  //   if (swim > k) continue;

  //   // Ya llegamos
  //   if (pos == n + 1) {
  //     cout << "YES\n";
  //     return;
  //   }

  //   // Si estamos en el agua, solo nadamos 1 adelante
  //   if (s[pos] == 'W') {
  //     if (s[pos + 1] != 'C' && swim + 1 < min_swim[pos + 1]) {
  //       min_swim[pos + 1] = swim + 1;
  //       q.push_back({pos + 1, swim + 1});
  //     }
  //   } else {
  //     // Estamos en la orilla o tronco, saltamos
  //     for (int j = 1; j <= m; j++) {
  //       int nxt = pos + j;
  //       if (nxt > n + 1) break;
  //       if (s[nxt] == 'C') continue;
  //       if (swim < min_swim[nxt]) {
  //         min_swim[nxt] = swim;
  //         q.push_front({nxt, swim});  // sin nadar
  //       }
  //     }
  //   }
  // }

  // cout << "NO\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
