#include <bits/stdc++.h>
using namespace std;

void solve() {
  string guide = "Yes", s;
  cin >> s;
  int j = (s[0] == guide[0]   ? 0
           : s[0] == guide[1] ? 1
           : s[0] == guide[2] ? 2
                              : -1);
  if (j == -1) {
    cout << "NO\n";
    return;
  }

  bool ok = true;
  int n = s.size();
  j++;
  for (int i = 1; i < n; ++i) {
    if (j > 2) j = 0;
    if (s[i] != guide[j]) {
      ok = false;
    }
    j++;
  }
  cout << (ok ? "YES\n" : "NO\n");
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) solve();
}
