
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, m, k; cin >> n >> m >> k;
  int total = (n - 1) + (m - 1) * (n);
  cout << (k == total ? "YES" : "NO") << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
    solve();
}
