#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, k, cnt = 0, ans = 0;
  cin >> n >> k;
  vector<int> a(n);
  for (auto &x : a) cin >> x;

  for (int i = 0; i < n; i++) {
    if (a[i] == 1) {
      cnt = 0;
    }

    if (a[i] == 0) {
      cnt++;
    }

    if (cnt == k) {
      i++;
      ans++;
      cnt = 0;
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
