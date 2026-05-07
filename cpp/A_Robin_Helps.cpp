#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for (int i = 0; i < n; i++) 
    cin >> v[i];
  
  int ans = 0, count = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] >= k) {
      ans += v[i];
      continue;
    }

    if (v[i] == 0 && ans > 0) {
      count++;
      ans--;
    }
  }
  
  cout << count << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}