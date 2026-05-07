#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m; 
  cin >> n >> m;
  vector<string> g(n);
  for (auto &s : g) cin >> s;

  string target = "vika";
  int k = 0; // siguiente letra a buscar

  for (int col = 0; col < m && k < 4; ++col) {
      bool found = false;
      for (int row = 0; row < n; ++row) {
          if (g[row][col] == target[k]) { found = true; break; }
      }
      if (found) ++k;
  }
  cout << (k == 4 ? "YES" : "NO") << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t; cin >> t;
  while (t--) solve();
}
