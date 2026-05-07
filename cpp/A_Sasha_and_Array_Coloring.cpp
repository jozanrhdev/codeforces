
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array


void solve() {
  int n, ans = 0;
  cin >> n;
  vector<int> arr(n);
  for (int &x: arr) cin >> x;

  sort(arr.begin(), arr.end());
  int i = 0, j = n - 1;
  for (int i = 0; i < n / 2; ++i)
    ans += arr[n - 1 - i] - arr[i];
  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}