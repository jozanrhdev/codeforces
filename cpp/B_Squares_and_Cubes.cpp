#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  ll n; cin >> n; 
  ll square = sqrt(n), cubic = cbrt(n), six = pow(n, 1.0/6.0);
  cout << (square + cubic - six + (square * square == n && cubic * cubic * cubic == n && pow(six, 6) != n ? -1 : 0))  << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}