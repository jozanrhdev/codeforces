#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int x, y; cin >> x >> y;
  int z = x & y;
  cout <<  (z ^ x) + (z ^ y) << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
    solve();
}
// 1100 -> 12
// 110 -> 6
// 100 -> 4
