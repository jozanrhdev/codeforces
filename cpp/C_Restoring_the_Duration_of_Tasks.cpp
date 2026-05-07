#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  vector<ll> s(n), f(n);

  for (int i = 0; i < n; ++i) cin >> s[i];
  for (int i = 0; i < n; ++i) cin >> f[i];

  ll prev_finish = 0;
  for (int i = 0; i < n; ++i) {
    ll start_i = max(s[i], prev_finish);
    ll di = f[i] - start_i;
    cout << di << (i + 1 == n ? '\n' : ' ');
    prev_finish = f[i];
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}