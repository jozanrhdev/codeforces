#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  string ans = "";
  for (int i = 0; i < n; ++i) {
    if (s[i] == 'L') ans += 'L';
    if (s[i] == 'R') ans += 'R';
    if (s[i] == 'D') ans += 'U';
    if (s[i] == 'U') ans += 'D';
  }
  cout << ans << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) solve();
}
