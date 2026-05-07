#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int l1, l2, l3;
  cin >> l1 >> l2 >> l3;
  bool ok = ((l1 == l2 && l3 % 2 == 0) || (l2 == l3 && l1 % 2 == 0) ||
             (l3 == l1 && l2 % 2 == 0));
  cout << ((ok || l1 == l2 + l3 || l2 == l1 + l3 || l3 == l1 + l2) ? "YES\n"
                                                                   : "NO\n");
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}