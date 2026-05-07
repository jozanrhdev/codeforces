#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);

  int mn = INT_MAX;
  for (int &x : a) {
    cin >> x;
    mn = min(mn, x);
  }

  int ans = 0;
  for (int i = 0; i < n; ++i) {
    ans += (mn != a[i] ? 1 : 0);
  }
  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}