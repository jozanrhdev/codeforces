#include <bits/stdc++.h>
using namespace std;

void solve() {
  int odd = 0, even = 0, n;
  cin >> n;
  for (int i = 0, x; i < n; i++) {
    cin >> x;
    odd += (x % 2 == 0 ? 1 : 0);
    even += (x % 2 == 1 ? 1 : 0);
  }
  cout << min(odd, even) << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) solve();
}
