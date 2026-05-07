
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, j, k, bigger = 0;
  cin >> n >> j >> k;

  vector<int> a(n);
  for (int &x : a) {
    cin >> x;
    bigger = max(bigger, x);
  }

  if (bigger == a[j - 1] || k > 1) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) solve();
}
