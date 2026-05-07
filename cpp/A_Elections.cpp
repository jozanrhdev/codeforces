#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  ll a, b, c;
  cin >> a >> b >> c;
  ll ma = max((ll) 0, max(b, c) + 1 - a);
  ll mb = max((ll) 0, max(a, c) + 1 - b);
  ll mc = max((ll) 0, max(a, b) + 1 - c);
  cout << ma << " " << mb << " " << mc << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}