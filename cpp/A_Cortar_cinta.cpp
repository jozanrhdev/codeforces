#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, a, b, c;
  cin >> n >> a >> b >> c;
  vector<int> dp(n + 1, 0);

  if (a <= n) 
    dp[a] = 1;
  if (b <= n)
    dp[b] = 1;
  if (c <= n)
    dp[c] = 1;

  for (int i = 1; i <= n; i++) {
    for (int j: {a, b, c}) {
      if (j <= i) {
        dp[i] = (dp[i-j] > 0 ? max(dp[i], dp[i-j]+1) : dp[i]);
      }
    }
  }
  cout << dp[n] << "\n";
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  // int t;
  // cin >> t;
  // while(t--)
  solve();
}