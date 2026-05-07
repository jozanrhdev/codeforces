#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  ll n, k, mult = 1; cin >> n >> k;

  vector<ll> a(n);

  for (ll &x: a) {
    cin >> x;
    mult *= x;
  }

  // cout << mult << ' ';
  if (mult > 2023 || 2023 % mult != 0) {
    cout << "NO\n";
    return;
  }

  ll rest = 2023 / mult;

  cout << "YES\n";
  cout << rest << ' ';
  for (ll i = 0; i < k - 1; ++i) {
    cout << 1 << ' ';
  }
  cout << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}