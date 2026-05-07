#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  // int mx = max(a, max(b, c));
  // 10 9 3
  // f(10) = min |10 - x| + |9 - x| + |3 - x|

  int a1 = abs(a - a) + abs(b - a) + abs(c - a);
  int b1 = abs(a - b) + abs(b - b) + abs(c - b);
  int c1 = abs(a - c) + abs(b - c) + abs(c - c);
  int ans = min(a1, min(b1, c1));

  cout << ans << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}