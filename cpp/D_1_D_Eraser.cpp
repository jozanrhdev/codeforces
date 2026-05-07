#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, k, ans = 0;
  cin >> n >> k;
  string s;
  cin >> s;
  int m = s.length();

  for (int i = 0; i < m; i++) {
    if (s[i] == 'B') {
      i += (k - 1);
      ans++;
    }
  }

  cout << ans << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--)
    solve();
}