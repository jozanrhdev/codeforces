#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);

  for (int &x : a) cin >> x;

  sort(a.begin(), a.end());

  int ans = 0, j = -1;
  for (int i = n - 1; i >= 0; --i) {
    if (a[i] < x) {
      j = i;
      break;
    } else
      ans++;
  }

  if (j == -1) {
    cout << ans << '\n';
  } else {
    // vectorint> dp(n);
    for (int i = j; i >= 0; i--) {
      // cout << a[i] << ' ' << j << ' ' << i << '\n';
      if (a[i] * (j - i + 1) >= x) {
        ans++;
        j = i - 1;
      }
    }
    cout << ans << '\n';
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}