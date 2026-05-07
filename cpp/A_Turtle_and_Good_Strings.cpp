#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int m = s.size();
  cout << (s[0] == s[m - 1] ? "NO" : "YES") << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}