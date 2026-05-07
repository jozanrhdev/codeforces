#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array


void solve() {
  int n, ans = 0;
  bool ok = false;
  map<char, int> m;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    char c;
    cin >> c;
    m[c]++;
    if (m['0'] >= 3 && m['2'] >= 2 && m['1'] >= 1 && m['3'] >= 1 && m['5'] >= 1 && !ok) {
      ans = i + 1;
      ok = true;
    }
  }
  cout << ans << '\n';
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}