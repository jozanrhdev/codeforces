#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, m, k, ans = 0;
  cin >> n >> m >> k;
  vector<int> left(n);
  vector<int> right(m);

  for (int i = 0; i < n; i++) 
    cin >> left[i];
  
  for (int i = 0; i < m; i++) 
    cin >> right[i];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (left[i] + right[j] <= k) {
        ans++;
      }
    }
  }

  cout << ans << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}