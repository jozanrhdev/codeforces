#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, ans = 0;
  cin >> n;
  string s;
  cin >> s;
  map<char, int> mp;
  for (auto &x : s) mp[x]++;

  for (auto &[k, v] : mp) 
    if (v / (k - 'A' + 1) > 0) ans++;
  
  cout << ans << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}