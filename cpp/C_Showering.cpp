#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, s, m;
  cin >> n >> s >> m;
  int a[n], b[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    cin >> b[i];
  }

  int k = 0, ans = -1;
  for (int i = 0; i < n; i++) {
    if (a[i] - k >= s) {
      ans = 0;
      cout << "YES" << endl;
      break;
    } else {
      k = b[i];
    }
  }

  if (ans == -1) {
    if (m - k >= s) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
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