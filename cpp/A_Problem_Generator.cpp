#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, m;
  cin >> n >> m;
  string s;
  cin >> s;
  map<char, int> mp = {
    {'A', 0}, {'B', 0}, {'C', 0}, {'D', 0}, {'E', 0}, {'F', 0}, {'G', 0}
  };

  for (int i = 0; i < n; i++) 
    mp[s[i]]++;
  
  int sm = 0;
  for (auto it = mp.begin(); it != mp.end(); it++) 
    sm += abs(min(it->second, m) - m);
  
  cout << sm << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}