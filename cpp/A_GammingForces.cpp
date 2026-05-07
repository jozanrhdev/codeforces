#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;

  int one = 0, dft = 0;
  for (int i = 0, x; i < n; ++i) {
    cin >> x;
    (x == 1 ? ++one : ++dft);
  }
  cout << dft + (one / 2 + one % 2) << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
