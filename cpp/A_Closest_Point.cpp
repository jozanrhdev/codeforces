#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &x: a) cin >> x;

  if (n != 2) {
    cout << "NO\n";
    return;
  }

  int ans = abs(a[0] - a[1]);
  if (ans > 1) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
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