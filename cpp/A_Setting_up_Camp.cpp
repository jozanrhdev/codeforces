#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  ll a, b, c;
  cin >> a >> b >> c;

  ll first = b % 3;
  ll ans = b / 3;
  bool verify = (first && (c + first) < 3 ? false : true);
  ans = a + ans + (first ? ceil((first + c) / 3.0) : ceil(c / 3.0));
  cout << (!verify ? -1 : ans) << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
