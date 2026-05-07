#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  string p1, p2;
  cin >> p1 >> p2;

  bool ok = p1[0] == '0';
  if (ok) {
    for (int i = 1; i < n; i++) {
      if (p1[i] == '1' && p2[i] == '1') {
        ok = false;
        break;
      }
    }
  }
  cout << (ok ? "YES" : "NO") << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}