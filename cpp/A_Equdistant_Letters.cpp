#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  string s;
  cin >> s;
  map<char, int> mp;

  for (char c : s) mp[c]++;

  int cnt = 0;
  string ans = "";
  for (auto &[k, v] : mp) {
    if (v > 1) {
      cnt++;
      ans += k;
      ans += k;
    } else {
      ans += k;
    }
  }

  if (cnt < 2) {
    cout << s << '\n';
  } else {
    cout << ans << '\n';
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
