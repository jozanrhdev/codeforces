#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  map<char, int> mp;

  int ans = 0;
  for (int i = 0; i < n * 4; i++)
  {
    mp[s[i]]++;
  }

  for (auto &[k, v] : mp)
  {
    // cout << k << ' ' << v << '\n';
    ans += (k != '?' ? min(v, n) : 0);
  }
  cout << ans << '\n';
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