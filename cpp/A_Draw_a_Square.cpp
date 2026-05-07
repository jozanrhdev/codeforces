#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int l, r, d, u;
  cin >> l >> r >> d >> u;
  cout << (l == r && r == d && d == u ? "Yes" : "No") << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}