#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  int ans = 0;

  for (int i = 1; i < n; i++) {
    if (v[i] == v[i - 1]) {
      ans++;
    }
  }
  ans += ans % 2;
  cout << n - ans << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) 
      solve();
}