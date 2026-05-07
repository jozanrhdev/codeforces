#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, m;
  cin >> n >> m;
  vector<string> a(n);

  for (auto &x: a) cin >> x;

  int minor = (2 << 30) - 1;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int sm = 0 ;
      for (int k = 0; k < m; k++)
        sm += abs(a[i][k] - a[j][k]);

      minor = min(minor, sm);
    }
  }
  cout << minor << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
    
  int t;
  cin >> t;
  while(t--)
    solve();
}