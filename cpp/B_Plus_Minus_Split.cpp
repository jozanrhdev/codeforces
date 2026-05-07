#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, ans = 0;
  cin >> n;
  string s;
  cin >> s;

  for (char &c : s) {
    ans += (c == '+' ? 1 : -1);
  }

  cout << abs(ans) << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
