#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n; cin >> n;
  vector<int> a(n + 1);
  bool ok = false;

  for (int i = 1; i < n + 1; ++i) cin >> a[i];  

  for (int i = 1; i < n + 1; ++i) {
      int k1 = a[i];
      int k2 = a[k1];
      int k3 = a[k2];
      if (i == k3) {
        cout << "YES\n";
        return;
      }
  }
  cout << "NO\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  // int t;
  // cin >> t;
  // while(t--)
  solve();
}