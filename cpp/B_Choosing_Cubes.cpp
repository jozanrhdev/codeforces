
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, f, k, fav;
  cin >> n >> f >> k;

  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (i + 1 == f) {
      fav = arr[i];
    }
  }
  
  sort(arr.begin(), arr.end());
  reverse(arr.begin(), arr.end());

  if (arr[k - 1] == fav && (k < n && arr[k] == fav)) {
    cout << "MAYBE" << endl;
  } else if (arr[k - 1] <= fav) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
    solve();
}