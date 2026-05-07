#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define arr array

void solve() {
  int n, x, y;
  cin >> n >> x >> y;

  int div = (x > y ? y : x);
  int ans = n / div;
  cout << (n == div * ans ? ans : ++ans) << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
