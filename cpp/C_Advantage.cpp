#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  ll n;
  cin >> n;
  vector<ll> arr(n), rp(n), cur;
  for (ll i = 0; i < n; i++) 
    cin >> arr[i];

  copy(arr.begin(), arr.end(), rp.begin());
  sort(arr.begin(), arr.end());
  ll mx = arr[n - 1];
  ll mxs = arr[n - 2];

  for (ll i = 0; i < n; i++)
      cur.push_back(rp[i] == mx ? rp[i] - mxs : rp[i] - mx);

  for (ll i = 0; i < n; i++)
    cout << cur[i] << ' ';
  cout << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}