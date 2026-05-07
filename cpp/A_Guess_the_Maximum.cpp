#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int &x : a) cin >> x;

  int ans = INT_MAX;
  for (int i = 1; i < n; ++i) ans = min(ans, max(a[i], a[i - 1]));

  cout << ans - 1 << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
