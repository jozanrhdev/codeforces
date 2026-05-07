#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int a, b, c;
  cin >> a >> b >> c;

  int f1 = a - 1;
  int f2 = abs(b - c) + c - 1;

  if (f1 < f2)
    cout << 1 << endl;
  else if (f1 == f2)
    cout << 3 << endl;
  else
    cout << 2 << endl;

} 

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}