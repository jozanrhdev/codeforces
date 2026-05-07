#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  vector<ll> arr(n + 1);

  for (int i = 1; i <= n; ++i) cin >> arr[i];

  // ai - i < aj - j

  // for (int i = 0; i < n; i++) {
  //   cout << cp[i] << " ";
  // }
  // cout << '\n';
  // for (int i = 0; i < n; i++) {
  //   if (cp[i] >= 0) continue;
  //   for (int j = i + 1; j < n; j++) {
  //     if (cp[j] >= 0) continue;
  //     if (cp[j] > (j - i) * -1) {
  //       ans++;
  //     }
  //   }
  // }

  ll ans = 0;
  vector<int> valid_i;
  for (int j = 1; j <= n; ++j) {
    if (arr[j] < j) {
      // Count how many i < a[j] in valid_i
      ans +=
          lower_bound(valid_i.begin(), valid_i.end(), arr[j]) - valid_i.begin();
      valid_i.push_back(j);
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