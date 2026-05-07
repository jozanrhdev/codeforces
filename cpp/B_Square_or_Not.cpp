#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  string s;
  cin >> n >> s;
  int m = sqrt(n);
  if (1LL * m * m != n) {
    cout << "No\n";
    return;
  }

  auto at = [&](int i, int j) { return s[i * m + j]; };

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      if (i == 0 || j == 0 || i == m - 1 || j == m - 1) {
        if (at(i, j) != '1') {
          cout << "No\n";
          return;
        }
      } else {
        if (at(i, j) != '0') {
          cout << "No\n";
          return;
        }
      }
    }
  }
  cout << "Yes\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) solve();
}
