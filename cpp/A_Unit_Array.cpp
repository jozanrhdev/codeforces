#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array
  // for (int i = 0; i < n; i++) {
  //   int x;
  //   cin >> x;
  //   if (x < 0) minus++;
  //   else plus++;
  // }

  // int ans = 0;

  // while (plus - minus < 0) {
  //   minus--;
  //   plus++;
  //   ans++;
  // }

  // while (minus % 2 != 0) {
  //   minus--;
  //   plus++;
  //   ans++;
  // }
void solve() {
  int n, m = 0, p = 0, x;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> x;
    (x == 1 ? p : m)++;
  }

  int ans = 0;
  if (m > p ) ans = (m - p + 1) / 2;
  if ((m - ans) & 1) ans++;

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