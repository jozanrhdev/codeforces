#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int p1 = a + b;
  int p2 = c - b;
  int p3 = d - c;

  if (p1 == p2 && p2 == p3) {
    cout << 3 << endl;
  } else if (p1 == p2 || p2 == p3 || p1 == p3) {
    cout << 2 << endl;
  } else {
    cout << 1 << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}