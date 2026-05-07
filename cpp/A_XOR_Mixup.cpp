#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &x : a) cin >> x;

  int ans = a[1];
  for (int i = 2; i < n; i++) {
    ans ^= a[i];
  }
  cout << ans << '\n';
  // cout << (100 ^ 100) << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) solve();
}
