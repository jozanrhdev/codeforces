#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, k, p;
  cin >> n >> k >> p;
  int div = (k < 0 ? k * -1 : k);
  cout << ((double) div / p > (double) n ? -1 : (int) ceil((double) div / p)) << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}