#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  vector<int> ans(n);

  if (n % 2 == 0) {
    for (int i = 0; i < n; i += 2) {
      ans[i] = i + 2;
      ans[i + 1] = i + 1;
    }
  } else {
    for (int i = 0; i < n - 3; i += 2) {
      ans[i] = i + 2;
      ans[i + 1] = i + 1;
    }
    // Para los últimos 3: [n-2, n-1, n]
    ans[n - 3] = n;
    ans[n - 2] = n - 2;
    ans[n - 1] = n - 1;
    // Alternativamente, puedes usar: [n-1, n, n-2] o [n, n-2, n-1]
    // Todas son válidas mientras ninguno quede fijo.
  }
  for (int i = 0; i < n; ++i) cout << ans[i] << " ";
  cout << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}