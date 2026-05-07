#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  ll m, a, b, c;
  cin >> m >> a >> b >> c;
  ll n = m * 2, x = 0, y = 0;
  x = min(a, m);
  y = min(b, m);
  cout << (x + y == n ? n : x + y + c >= n ? n : x + y + c) << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}

// #blog > h1 nodos hijos
// #blog h1 todos los h1 dentro de #blog