#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, a = 0, b = 0, c = 0, d = 0;
  bool ok = true;
  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    int x;
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      a += arr[i] % 2 == 0 ? 1 : 0;
      b += arr[i] % 2 == 1 ? 1 : 0;
    } else {
      c += arr[i] % 2 == 0 ? 1 : 0;
      d += arr[i] % 2 == 1 ? 1 : 0;
    }
  }

  cout << (((a > 0 && b > 0) || (c > 0 && d > 0)) ? "NO" : "YES") << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}