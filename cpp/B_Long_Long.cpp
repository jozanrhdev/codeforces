#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);

  ll sm = 0, cnt = 0;
  bool in_neg = false;
  for (ll &x: a) {
    cin >> x;
    sm += abs(x);

    if (x < 0) {
      if (!in_neg) cnt++;
      in_neg = true;
    } else if (x != 0) {
      in_neg = false;
    }
  }
  // for (ll &x : a) {
  //   cin >> x;
  //   sm += (x < 0 ? -x : x);
  //   if (x > 0) pos = false;

  //   if (x < 0 && !pos) {
  //     cnt++;
  //     pos = true;
  //   }
  // }

  cout << sm << ' ' << cnt << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
