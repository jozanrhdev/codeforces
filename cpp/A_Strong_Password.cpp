#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve()
{
  string s, ans;
  cin >> s;

  char tmp = s[0];
  int n = s.size(), cnt = 1;
  bool ok = false;
  for (int i = 1; i < n; i++)
  {
    if (tmp == s[i])
    {
      cnt++;
    }
    else
    {
      cnt = 1;
      tmp = s[i];
    }

    // cout << cnt << '\n';
    if (cnt == 2)
    {
      char c = 'z' - (tmp - 'a'); // → 'z'
      string t(1, c);
      ans = s.substr(0, i) + t + s.substr(i, n - i);
      ok = true;
      break;
    }
  }
  if (!ok)
  {
    char c = 'z' - (s[n - 1] - 'a');
    string t(1, c);
    ans = s + t;
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
