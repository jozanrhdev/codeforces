#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve()
{
  int n, thorns = 0, ans = 0;
  cin >> n;
  string s;
  cin >> s;

  for (int i = 0; i < n; i++)
  {
    if (thorns > 1)
      break;
    if (s[i] == '*')
    {
      thorns++;
    }
    if (s[i] == '@')
    {
      ans++;
      thorns = 0;
    }
    if (s[i] == '.')
    {
      thorns = 0;
    }
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