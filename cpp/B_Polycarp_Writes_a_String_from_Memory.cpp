#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define arr array

void solve() {
  string s;
  cin >> s;

  int n = s.size(), ans = 0;
  set<char> follow;
  for (int i = 0; i < n; ++i) {
    follow.insert(s[i]);
    if (follow.size() > 3) {
      ans++;
      follow.clear();
      follow.insert(s[i]);
    }
  }
  if (follow.size() >= 0) ans++;
  cout << ans << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
