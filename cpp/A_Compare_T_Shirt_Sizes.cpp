
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
  string a, b;
  cin >> a >> b;

  int n = a.size();
  n *= (a[n - 1] == 'S' ? -1 : a[n - 1] == 'L' ? 1 : 0);
  int m = b.size();
  m *= (b[m - 1] == 'S' ? -1 : b[m - 1] == 'L' ? 1 : 0);

  if (n == m) {
    cout << "=\n";
  } else if (n > m) {
    cout << ">\n";
  } else {
    cout << "<\n";
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