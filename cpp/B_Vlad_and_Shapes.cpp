#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

// void solve() {
//   int n;
//   cin >> n;
//   vector<string> arr(n);
//   for (auto &a : arr) {
//     cin >> a;
//   }

//   int i1 = 0, i2 = 0;
//   int j1 = 0, j2 = 0;
//   int cnt = 0;
//   bool first = false;
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n; j++) {
//       if (arr[i][j] == '1' && !first) {
//         first = true;
//         i1 = i;
//         j1 = j;
//       }

//       if (arr[i][j] == '1' && i1 == i) {
//         cnt++;
//       }

//       if (arr[i][j] == '1') {
//         i2 = i;
//         j2 = j;
//       }
//     }
//   }
//   cout << (j1 + cnt - 1 == j2 ? "SQUARE" : "TRIANGLE") << '\n';
// }

void solve() {
  int n; cin >> n;
  vector<string> g(n);
  for (auto &s : g) cin >> s;

  int r = -1;
  for (int i = 0; i < n; ++i) if (g[i].find('1') != string::npos) { r = i; break; }

  int c1 = count(g[r].begin(), g[r].end(), '1');
  int c2 = count(g[r+1].begin(), g[r+1].end(), '1');
  cout << (c2 == c1 ? "SQUARE" : "TRIANGLE") << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}