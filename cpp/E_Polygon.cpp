
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

const int MAXN = 1000;

void solve() {
  int n;
  cin >> n;
  vector<string> s(n);

  for (auto &row : s) cin >> row;

  for (int i = n - 2; i >= 0; i--) {
    for (int j = n - 2; j >= 0; j--) {
      if (s[i][j] == '1' && s[i + 1][j] != '1' && s[i][j + 1] != '1') {
        cout << "NO\n";
        return;
      }
    }
  }

  cout << "YES\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}