#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, c = 0;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int sm = arr[0];
  bool ok = true;
  for (int i = 0; i < n; i++) {
    if (arr[i] == sm) {
      c++;
    }
  }

  cout << (c == n ? "NO" : "YES") << endl;

  if (c != n) {
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    if (arr[0] == arr[1]) {
      swap(arr[1], arr.back());
    }
    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
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