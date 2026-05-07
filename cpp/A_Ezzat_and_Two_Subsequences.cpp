#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define arr array

void solve() {
  cout << setprecision(9) << fixed;
  int n; cin >> n;
  ld sm = 0;
  ll M = LLONG_MIN;
  for (int i = 0; i < n; ++i) {
    ll x; cin >> x;
    sm += x;
    M = max(M, x);
  }
  ld ans = (ld) M + (sm - (ld) M) / (n - 1);
  cout << ans << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
