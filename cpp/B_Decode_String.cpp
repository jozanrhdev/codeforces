#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  string s, ans = "";
  cin >> s;

  int m = s.size();
  for (int i = m - 1; i >= 0; --i) {
    if (s[i] == '0') {
      char c = 'a' + (((((s[i - 2] - '0') * 10) + (s[i - 1] - '1'))) % 26);
      string t(1, c);
      ans = t + ans;
      i -= 2;
    } else {
      char c = 'a' + (((s[i] - '1')) % 26);
      string t(1, c);
      ans = t + ans;
    }
  }
  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}