#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  string s;
  map<char, int> mp;
  cin >> s;

  for (char c : s) mp[c]++;

  int ans = 0, cnt = 0;
  for (auto &[k, v] : mp) {
    if (v >= 2)
      ans++;
    else
      cnt++;
  }

  cout << (ans + cnt / 2) << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}