#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n; cin >> n;
  vector<int> a(n);

  for (int &x: a) cin >> x;

  int m = 10 - n;
  cout << ((m * (m - 1)) / 2 * 6) << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}