#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int l, r;
  cin >> l >> r;

  cout << (r == l && l == 1 ? r - l + 1 : r - l) << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
