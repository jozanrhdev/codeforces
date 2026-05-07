#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve()
{
  int n, k;
  cin >> n >> k;
  int i, j;
  int m = n - k;

  for (int i = m; i >= 1; i--)
  {
    cout << i << ' ';
  }
  for (int i = m; i < n; i++)
  {
    cout << i + 1 << ' ';
  }
  cout << '\n';
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