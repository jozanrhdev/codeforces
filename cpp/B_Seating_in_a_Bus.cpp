#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, a = 0, b = 0, c = 0;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  a = arr[0], b = arr[0];
  bool ok = true;
  for (int i = 1; i < n; i++) {

    if (abs(arr[i] - a) > 1 && abs(arr[i] - b) > 1) {
      ok = false;
      break;
    }

    a = min(a, arr[i]);
    b = max(b, arr[i]);
  }

  cout << (ok ? "YES" : "NO") << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}