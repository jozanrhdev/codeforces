#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n; cin >> n;
  int xr = 0;
  for (int i = 0, a; i < n; ++i) {
    cin >> a;
    xr ^= a;
  }

  if (n % 2 == 1) {
    cout << xr << '\n';
  } else {
    cout << (xr == 0 ? 0 : -1) << '\n';
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
    solve();
}
