#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, ans = 0;
  cin >> n;
  vector<int> a(n);

  bool ok = true;
  for (int &x : a) cin >> x;

  for (int i = n - 2; i >= 0; --i) {
    if (a[i] > a[i + 1]) {
      ans = max(ans, a[i]);
    }
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