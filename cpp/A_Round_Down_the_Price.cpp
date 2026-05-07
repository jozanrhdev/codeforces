#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  string m;
  cin >> m;
  int n = m.size() - 1;
  ll rest = stoll(m);

  cout << rest - (ll) pow(10, n) << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}