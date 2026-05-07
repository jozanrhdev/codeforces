#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define arr array

void solve() {
  int n;
  cin >> n;
  int k = sqrt((double)n);

  if (k * k < n) ++k;
  cout << k << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
