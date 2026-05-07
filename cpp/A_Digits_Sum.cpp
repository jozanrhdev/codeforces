#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
  string s;
  cin >> s;
  
  int n = s.size();
  string left = s.substr(0, n - 1);
  string right = s.substr(n - 1);
  int ans = stoi(left == "" ? "0" : left) + (right == "9" ? 1 : 0);
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