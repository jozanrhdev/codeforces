#include <bits/stdc++.h>
using namespace std;

void solve() {
  int row[2][2];
  cin >> row[0][0] >> row[0][1];
  cin >> row[1][0] >> row[1][1];
  int cnt = 0;
  bool ok = false;

  while (cnt < 4) {
    if (row[0][0] < row[0][1] && row[1][0] < row[1][1] &&
        row[0][0] < row[1][0] && row[0][1] < row[1][1]) {
      ok = true;
      break;
    } else {
      int tmp = row[0][0];
      row[0][0] = row[1][0];
      int cmp = row[0][1];
      row[0][1] = tmp;
      int bmp = row[1][1];
      row[1][1] = cmp;
      row[1][0] = bmp;
    }
    cnt++;
  }
  cout << (ok ? "YES\n" : "NO\n");
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) solve();
}
