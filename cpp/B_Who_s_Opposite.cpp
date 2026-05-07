#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  ll a, b, c;
  cin >> a >> b >> c;
  ll ab = abs(a - b);
  if (ab == 1) {
    cout << -1 << endl;
    return;
  }
  cout << (ab * 2 < c || ab * 2 < a || ab * 2 < b ? -1 : c + ab > ab * 2 ? c + ab - ab * 2 : c + ab) << endl;

}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}