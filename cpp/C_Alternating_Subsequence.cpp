#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  vector<ll> arr(n);
  for (auto &x : arr) cin >> x;

  ll ans = 0;
  ll cur_max = arr[0];

  for (int i = 1; i < n; ++i) {
    if ((arr[i] > 0 && cur_max > 0) || (arr[i] < 0 && cur_max < 0)) {
      cur_max = max(cur_max, arr[i]);
    } else {
      ans += cur_max;
      cur_max = arr[i];
    }
  }
  ans += cur_max;
  cout << ans << "\n";
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}