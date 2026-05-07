#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  string s;
  map<string, int> mp;
  cin >> n >> s;

  for (int i = 0; i < n - 1; i++) {
    mp[s.substr(i, 2)]++;
  }

  // for (auto &[k, v] : mp) {
    // cout << k << " " << v << "\n";

  // }
  cout << mp.size() << "\n";
  // cout << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}