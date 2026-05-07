#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  string s; cin >> s;
  int n = (int)s.size();
  int x = stoi(s);
  if (x % 7 == 0) { cout << x << '\n'; return; }

  int pref = stoi(s.substr(0, n - 1));
          int base10 = pref * 10;
  int d = (7 - (base10 % 7)) % 7;   // dígito que corrige
  cout << base10 + d << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}