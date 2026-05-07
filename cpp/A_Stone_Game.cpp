#include <bits/stdc++.h>

using namespace std;  

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) 
    cin >> arr[i];

  ll mn = pow(2, 64) - 1, mx = 0, r = 0, l = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] > mx) {
      mx = arr[i];
      r = i;
    }

    if (arr[i] < mn) {
      mn = arr[i];
      l = i;
    }
  }
  ll bc = l - r;

  if (bc < 0) { //4, 2 (2 + (4 - 3) + 1) = 4 
    ll ans = min(r + 1, min(n - l , (l) + (n - r) + 1));
    cout << ans << endl;
  } else {
    ll ans = min(l + 1, min(n - r , (r) + (n - l) + 1));
    cout << ans << endl;
  }

}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}