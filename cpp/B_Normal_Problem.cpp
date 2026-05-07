#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  string s, rv = "", ans = "";
  cin >> s;
  int n = s.length();
  for (int i = n - 1; i >= 0; i--) {
    rv += s[i];
  }

  for (int i = 0; i < n; i++) {
    if (rv[i] == 'p') {
      ans += 'q';
    } else if (rv[i] == 'q') {
      ans += 'p';
    } else {
      ans += rv[i];
    }
  }

  cout << ans << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}