#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  ll ans = 0;
  cin >> n;

  for (int i = 0; i < n - 1; i++) {
    int x;
    cin >> x;
    ans  += -1 * x;
  }

  cout  << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
    solve();
}