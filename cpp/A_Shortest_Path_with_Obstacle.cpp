#include <bits/stdc++.h>
using namespace std;

void solve() {
  int x1, y1;
  int f1, f2;
  int x2, y2;
  cin >> x1 >> y1;
  cin >> x2 >> y2;
  cin >> f1 >> f2;

  int ans;
  if (y1 == f2 && y2 == f2) {
    ans = abs(x1 - x2) + abs(y1 - y2) +
          (f1 >= max(x1, x2) || f1 <= min(x1, x2) ? 0 : 2);
  } else if (x1 == f1 && x2 == f1) {
    ans = abs(x1 - x2) + abs(y1 - y2) +
          (f2 >= max(y1, y2) || f2 <= min(y1, y2) ? 0 : 2);
  } else {
    ans = abs(x1 - x2) + abs(y1 - y2);
  }
  cout << ans << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) solve();
}
