#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define ar array

void solve() {
  ll k; cin >> k;
  ll rt = sqrtl((ld) k);
  ll n = (rt * rt == k) ? rt : rt + 1;
  ll p = (n - 1) * (n - 1);
  ll d = k - p;

  ll r, c;
  if (d <= n) { r = d; c = n; }
  else { r = n; c = 2 * n - d; }

  cout << r << ' ' << c << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}