#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  // vector<int> a(n);

  int dft = 0;
  for (int i = 0, x; i < n; ++i) {
    cin >> x;
    (x == i + 1 ? ++dft : dft);
  }

  cout << ceil(dft / 2.0) << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
