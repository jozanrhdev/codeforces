#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  ll n, k;
  cin >> n >> k;

  cout << ((n - 2) % k == 0 || n % k == 0 || n % 2 == 0 || (n - k) % 2 == 0 ? "YES" : "NO") << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}