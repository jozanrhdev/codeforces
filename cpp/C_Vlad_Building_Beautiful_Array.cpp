#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n; cin >> n;
  ll mn = LLONG_MAX;
  bool anyOdd = false;

  for (int i = 0; i < n; ++i) {
    ll x; cin >> x;
    mn = min(mn, x);

    if (x & 1LL) anyOdd = true;
  }

  if (mn & 1LL) {
    cout << "YES\n";
  } else {
    cout << (anyOdd ? "NO\n" : "YES\n");
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}