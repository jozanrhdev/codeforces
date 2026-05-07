#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  string s, t;
  cin >> s >> t;
  int n = (int) s.size(), m = (int) t.size();
  int L = 0;

  while (L < n && L < m && s[L] == t[L]) ++L;

  ll ans = min<ll>(n + m, 1 + n + m - L);
  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
} 