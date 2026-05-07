#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  string s, rest = "";
  cin >> s;
  int ten = (int) (s[0] - '0') * 10 + (s[1] - '0');
  bool ok = s.length() == 3 && (s[2] == '0' || (s[2] - '0' < 2)) ? false : s.length() > 3 && s[2] == '0' ? false : true;

  cout << (s.length() < 3 ? "NO" : ten != 10 ? "NO" : ok ? "YES" : "NO")<< endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}