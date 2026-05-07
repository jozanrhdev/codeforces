#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, x, c = 0, ans = 0;
  cin >> n;
  vector<int> v(n), cp(n);
  for (int i = 0; i < n; i++)  {
    cin >> x;
    v[i] = x;
    cp[i] = x;
  }
  
  sort(v.begin(), v.end());

  for (int i = 0; i < n; i++) {
    if (v[i] == cp[i]) {
      c++;
    }
  }

  // cout << c << " " << n << endl;
  
  if (c != n) {
    cout << 0 << endl;
  } else {
    ll min = (ll) pow(2, 64) - 1;
    for (int i = 1; i < n; i++) {
      if (floor((double) abs(cp[i] - cp[i - 1]) / 2.0) + 1 < min) {
        min = floor((double) abs(cp[i] - cp[i - 1]) / 2.0) + 1;
      }
    }
    cout << min << endl;
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