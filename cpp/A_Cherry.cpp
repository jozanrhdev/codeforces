#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

const int MAXN = 1000;

void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);

  for (ll &x : a) cin >> x;

  ll ans = 0;
  for (int i = 1; i < n; ++i) {
    ans = max(ans, a[i] * a[i - 1]);
  }

  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}