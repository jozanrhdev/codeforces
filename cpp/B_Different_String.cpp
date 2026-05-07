#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  bool ok = false;
  string s;
  cin >> s;

  int n = s.length();
  for (int i = 1; i < n; i++) {
    if (s[i - 1] != s[i]) {
      char tmp = s[i];
      s[i] = s[i - 1];
      s[i - 1] = tmp;
      ok = true;
      break;
    }
  }

 if (ok) {
   cout << "YES" << endl;
   cout << s << endl;
 } else {
   cout << "NO" << endl;
 }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}