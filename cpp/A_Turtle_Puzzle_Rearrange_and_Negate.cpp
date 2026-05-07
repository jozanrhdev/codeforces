#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  ll n, sm = 0;
  cin >> n;
  vector<ll> arr(n);
  for (ll i = 0; i < n; i++)  {
    // cout << i << endl;
    cin >> arr[i];
    sm += (arr[i] < 0 ? -1 * arr[i] : arr[i]);
  }

  cout << sm << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}