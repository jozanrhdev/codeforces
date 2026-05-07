#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n; cin >> n;
  vector<int> a(n);
  for (auto &x: a) cin >> x;

  sort(a.begin(), a.end());

  int ans = a[0];
  for (int i = 1; i < n; i++) {
    // cout << a[i] << '\n';
    ans = a[i] + ans - 1;
  }
  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
    solve();
}
