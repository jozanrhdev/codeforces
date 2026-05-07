#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, m, k, validate, ans = 0;
  cin >> n >> m >> k;
  string s;
  cin >> s;

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '0') cnt++;
    if (s[i] == '1') cnt = 0;
    if (cnt == m) {
        ans++;
        i += k - 1;
        cnt = 0;
    }
  }
  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
  solve();
}