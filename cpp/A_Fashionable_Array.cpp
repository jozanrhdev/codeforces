#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);

  for (int &x : a) cin >> x;

  sort(a.begin(), a.end());

  int lp = -1, rp = -1, li = -1, ri = -1;
  bool klp = false, krp = false, kli = false, kri = false;
  for (int i = 0; i < n; ++i) {
    if (a[i] % 2 == 0 && !klp) {
      klp = true;
      lp = i;
    }
    if (a[i] % 2 == 1 && !kli) {
      kli = true;
      li = i;
    }
  }

  for (int i = n - 1; i >= 0; --i) {
    if (a[i] % 2 == 0 && !krp) {
      krp = true;
      rp = i;
    }
    if (a[i] % 2 == 1 && !kri) {
      kri = true;
      ri = i;
    }
  }

  if (lp == -1 || rp == -1 || li == -1 || ri == -1 || (a[0] + a[n - 1]) % 2 == 0) {
    cout << 0 << '\n';
    return;
  }

  if ((rp == lp || ri == li) && n > 1) {
    cout << 1 << '\n';
    return;
  } else if ((rp == lp || ri == li) && n == 1) {
    cout << 0 << '\n';
    return;
  }

  // cout << rp << ' ' << lp << '\n';
  // cout << ri << ' ' << li << '\n';
  int one = n - (rp - lp + 1);
  int two = n - (ri - li + 1);
  cout << (one > two ? two : one) << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}