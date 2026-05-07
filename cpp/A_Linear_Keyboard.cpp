#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  string guide, s;
  map<char, int> mp;
  cin >> guide >> s;
  int n = guide.length(), m = s.length(), sm = 0;

  for (int i = 1; i <= n; i++) {
    mp[guide[i - 1]] = i;
  }

  for (int i = 1; i < m; i++) {
    sm += abs(mp[s[i]] - mp[s[i - 1]]);
  }

  cout << sm << endl;
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