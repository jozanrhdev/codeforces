#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);

  for (int &x : a) cin >> x;

  vector<int> b = a;

  sort(b.begin(), b.end());

  for (int i = 0; i < n; ++i) {
    if ((a[i] & 1) != (b[i] & 1)) {
      cout << "NO\n";
      return;
    }
  }

  cout << "YES\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}