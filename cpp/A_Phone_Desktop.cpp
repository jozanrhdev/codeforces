#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int x, y;
  cin >> x >> y;

  int a  = ceil((double)(4 * y) / 8.0);
  int b = ceil((double)(x + 4 * y) / 15.0);
  cout << max(a, b) << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
    solve();
}