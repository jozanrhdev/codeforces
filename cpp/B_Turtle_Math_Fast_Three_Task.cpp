#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n; cin >> n;
  long long sum = 0;
  bool has_mod1 = false;
  for (int i = 0; i < n; ++i) {
      int x; cin >> x;
      sum += x;
      if (x % 3 == 1) has_mod1 = true;
  }
  int r = (int)(sum % 3);
  if (r == 0) {
      cout << 0 << '\n';
  } else if (r == 1) {
      cout << (has_mod1 ? 1 : 2) << '\n';
  } else { // r == 2
      cout << 1 << '\n';
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