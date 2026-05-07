#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int a, b;
  cin >> a >> b;
  if (a == 0) {
    cout << 1 << endl;
    return;
  }
  cout << a + 2 * b + 1 << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}