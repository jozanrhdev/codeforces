#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, ans = -1;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];

  ll bs_multy = 0, sc_multy = 0;
  for (int i = 0; i < n; i++) 
    if (a[i] == 2)
      bs_multy++;

  for (int i = 0; i < n; i++) {
    if (a[i] == 2) {sc_multy++;}
    if (a[i] == 2) {bs_multy--;}
    if (sc_multy == bs_multy) {ans = i + 1; break;}
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