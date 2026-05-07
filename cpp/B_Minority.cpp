#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define arr array

void solve() {
  string s;
  cin >> s;
  
  int one = 0, zero = 0;
  for (char ch : s) {
    if (ch == '0') zero++;
    if (ch == '1') one++;
  }

  int n = s.size();
  if (zero == one) {
    cout << 0 << '\n';
    return;
  }
  cout << min(zero, one) << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
