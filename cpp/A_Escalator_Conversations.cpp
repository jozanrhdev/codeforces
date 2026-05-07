#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
  int n, m, k, H, ans = 0;
  cin >> n >> m >> k >> H;

  for (int i = 0, x; i < n; ++i) {
    cin >> x;
    if (abs(H - x) % k != 0 || H == x) continue;
    int y = abs(H - x) / k;
    if (y < m) {
      ans++;
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
