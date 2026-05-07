#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array


void solve() {
  int n; 
  if (!(cin >> n)) return;
  int ans = INT_MAX;
  for (int i = 0; i < n; ++i) {
    int x; cin >> x;
    int d = abs(x);
    // if (d == 0) { cout << 0 << '\n'; return; } // early exit
    ans = min(ans, d);
  }
  cout << ans << '\n';
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  // int t;
  // cin >> t;
  // while(t--)
    solve();
}