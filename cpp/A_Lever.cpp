#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, decrease = 0;
  cin >> n;
  vector<int> a(n), b(n);

  for (int &x : a) {
    cin >> x;
  }

  for (int &x : b) {
    cin >> x;
  }

  for (int i = 0; i < n; ++i) {
    decrease += (a[i] > b[i] ? a[i] - b[i] : 0);
  }

  cout << decrease + 1 << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}