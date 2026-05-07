#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  string s;
  cin >> s;
  int h = (s[0] - '0') * 10 + (s[1] - '0'), 
  m = (s[3] - '0') * 10 + (s[4] - '0');

  cout << ((h > 0 && h < 10) || (h > 12 && h - 12 < 10)  ? "0" : "") << (h > 12 || h == 0 ? abs(h - 12) : h) << ':';
  cout << (m < 10 ? "0" : "") << m << " ";
  cout << (h >= 12 ? "PM" : "AM") << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}