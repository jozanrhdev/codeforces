#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, a, sm = 0, cnt = 1;
  cin >> n;

  while (sm <= n) {
    a = cnt * (cnt + 1) / 2;
    sm += a;
    if (sm >= n) break;
    cnt++;
  }

  cout << (sm == n ? cnt : cnt - 1) << "\n";
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  // int t;
  // cin >> t;
  // while(t--)
  solve();
}