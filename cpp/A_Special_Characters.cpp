#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  if (n % 2 != 0) {
    cout << "NO\n";
    return;
  }

  bool ok = true;
  cout << "YES\n";
  for (int i = 0; i < n; i += 2) {
    cout << (ok ? "AA" : "BB");
    ok = !ok;
  }
  cout << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
