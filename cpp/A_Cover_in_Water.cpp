#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int ans = 0, c = 0;

  if (s.find("...") != -1) {
    cout << 2 << endl;
  } else {
    for (int i = 0; i < n; i++) {
      if (s[i] == '.') {
        ans++;
      }
    }
    cout << ans << endl;
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