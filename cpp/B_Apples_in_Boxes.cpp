#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, k;
  ll sm = 0;
  cin >> n >> k;
  vector<int> arr(n);
  for (auto &x : arr) {
    cin >> x;
    sm += x;
  }

  sort(arr.begin(), arr.end());

  int mx = arr[n - 1] - 1;
  int mn = arr[0] - 1;

  arr[n - 1] = arr[n - 1] - 1;

  sort(arr.begin(), arr.end());

  mx = arr[n - 1] == mx ? mx : mx + 1;

  cout << (mx - mn - 1 <= k && sm % 2 == 1 ? "Tom" : "Jerry") << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}