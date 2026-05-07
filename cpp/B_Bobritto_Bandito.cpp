#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, m, l, r;
  cin >> n >> m >> l >> r;

  int diff = abs(n - m);
  int rest = -l - diff >= 0 ? -l - diff : 0;
  cout << -rest << ' ' << (rest == 0 ? r + (-l - diff) : r) << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
