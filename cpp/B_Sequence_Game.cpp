#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  ll n;
  cin >> n;
  vector<ll> arr(n), ans;
  for (ll i = 0; i < n; i++) 
    cin >> arr[i];

  ans.push_back(arr[0]);
  for (ll i = 0; i < n - 1; i++) {
    if (arr[i] > arr[i + 1]) { 
      ans.push_back(arr[i + 1]);
    }
    ans.push_back(arr[i + 1]);
  }
  ll m = ans.size();

  cout << m << endl;

  for (ll i = 0; i < m; i++)
    cout << ans[i] << ' ';
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