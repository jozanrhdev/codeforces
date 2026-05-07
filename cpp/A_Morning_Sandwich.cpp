
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int b, c, h, ans = 0;
  cin >> b >> c >> h;

  bool bread = false;
  while (b != 0 && (c != 0 || h != 0)) {
    if (!bread) {
      b--;
      ans++;
      bread = true;
      continue;
    }

    if (c) {
      c--;
    } else if (h) {
      h--;
    }
    bread = false;

    ans++;
  }

  if (!bread) {
    if (b < 1)
      ans--;
    else
      ans++;
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