#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;
  int dogs = (a - x);
  int cats = (b - y);
  int dg, ct;
  if (dogs < 0) dg = dogs * -1;
  else dg = 0;
  if (cats < 0) ct = cats * -1;
  else ct = 0;
  
  cout << (dogs > 0 && cats > 0 ? "YES" : dg + ct <= c ? "YES" : "NO") << "\n";
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}