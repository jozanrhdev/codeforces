#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  cout << 1 << ' ';
  for (int i = 3; i <= n; ++i) cout << i << ' ';
  cout << 2 << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
