#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, k;
  cin >> n >> k;

  string ans = "";
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < k; ++j) {
      ans += 'a' + j;
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