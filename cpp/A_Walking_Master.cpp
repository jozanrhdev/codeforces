#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int rest = d - b;
  if (rest < 0) {
    cout << -1 << '\n';
    return;
  }
  a = a + rest;
  b = b + rest;

  if (a < c) {
    cout << -1 << '\n';
    return;
  }

  cout << rest + a - c << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
  solve();
}