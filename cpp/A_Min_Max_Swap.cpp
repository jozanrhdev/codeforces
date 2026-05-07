#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);

  for (int &x : a) cin >> x;
  for (int &x : b) cin >> x;

  for (int i = 0; i < n; ++i) {
    if (a[i] > b[i]) {
      int tmp = a[i];
      a[i] = b[i];
      b[i] = tmp;
    }
  }

  int mx_a = 0, mx_b = 0;
  for (int i = 0; i < n; ++i) {
    mx_a = max(a[i], mx_a);
    mx_b = max(b[i], mx_b);
  }

  cout << mx_a * mx_b << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}