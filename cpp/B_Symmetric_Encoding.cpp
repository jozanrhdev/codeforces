#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  set<char> a;

  for (auto c : s) {
    a.insert(c);
  }

  map<char, char> mp;
  vector<char> v;
  for (auto c : a) {
    v.push_back(c);
  }

  // sort(v.begin(), v.end());

  int m = v.size();
  for (int i = 0; i < m; i++) {
    mp[v[i]] = v[m - i - 1];
  }

  // for (auto &[k, v] : mp) {
  //   cout << k << ' ' << v << '\n';
  // }

  string ans = "";
  for (int i = 0; i < n; i++) {
    ans += mp[s[i]];
  }
  cout << ans << '\n';
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}