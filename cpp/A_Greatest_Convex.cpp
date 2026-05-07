#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

ll factorial(ll n) { return n == 0 ? 1 : n * factorial(n - 1); }

void solve() {
  int n;
  cin >> n;

  // if (n == 2) {
  //   cout << -1 << '\n';
  //   return;
  // }
  // (x + 1) (x - 1) (x - 2) (x - 3) ... (x - x = 1)
  cout << n - 1 << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}