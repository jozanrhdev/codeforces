#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

int n;

void solve() {
  cin >> n;
  vector<int> a(n);
  for (auto &x: a) cin >> x;

  int ans = 0;
  for (int i = 1; i < n; i++) {
    if (a[i - 1] % 2 == 0 && a[i] % 2 == 0) {
      ans++;
    }

    if (a[i - 1] % 2 == 1 && a[i] % 2 == 1) {
      ans++;
    }
  }
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