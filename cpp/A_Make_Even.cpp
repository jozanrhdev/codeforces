#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
  string s;
  cin >> s;
  
  int n = s.size(), ans = -1;
  int ans1 = (s[0] - '0') % 2 == 0 ? 1 : 0;
  int ans2 = (s[n - 1] - '0') % 2 == 0 ? 1 : 0;
  int ans3 = 0;
  for (int i = 1; i < n - 1; i++) {
    if ((s[i] - '0') % 2 == 0) {
      ans3++;
      break;
    }
  }
  if (ans3 > 0) ans3 = 2;

  cout << (ans2 > 0 ? 0 : ans1 > 0 ? 1 : ans3 > 0 ? 2 : -1) << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
    
  int t;
  cin >> t;
  while(t--)
    solve();
}
