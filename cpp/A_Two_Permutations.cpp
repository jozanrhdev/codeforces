#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, a, b;
  cin >> n >> a >> b;

  bool ok = false;
  if (a == n && b == n) ok = true;
  else if (a < n && b < n && a + b <= n - 2) ok = true;
  cout << (ok ? "Yes\n": "No\n");
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}