#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define arr array

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n), b(n);

  for (int &x : a) cin >> x;
  for (int &x : b) cin >> x;

  bool ok = true;
  while (ok) {
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
      if (a[i] <= k && b[i] != -1) {
        k += b[i];
        b[i] = -1;
      } else {
        cnt++;
      }
    }

    if (cnt == n) ok = false;
  }

  cout << k << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
