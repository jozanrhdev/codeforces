#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> arr(n);

  for (auto &x : arr) cin >> x;

  int ans = 0, i = 0, j = n - 1;
  while ((arr[i] <= k || arr[j] <= k) && i < j) {
    if (arr[i] <= k) {
      ans++;
      i++;
    }
    if (arr[j] <= k) {
      ans++;
      j--;
    }
  }
  cout << (i == j && arr[i] <= k ? ans + 1 : ans) << "\n";
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
    
    // int t;
    // cin >> t;
    // while(t--)
  solve();
}