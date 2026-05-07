#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, ans = 0;
  cin >> n;
  vector<pair<int, int>> v(n);
  for (auto &[x, y] : v) {
    cin >> x >> y;
    if (x > y) ans++;
  }

  cout << ans << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}