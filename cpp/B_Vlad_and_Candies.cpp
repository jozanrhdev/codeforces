#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define arr array

// void solve() {
//   int n;
//   cin >> n;
//   vector<ll> a(n);

//   ll sm = 0;
//   for (ll &x : a) {
//     cin >> x;
//     sm = (sm < x ? abs(sm - x) : sm - x);
//     cout << sm << ' ' << x << '\n';
//   }

//   cout << (abs(sm) <= 1 ? "YES\n" : "NO\n");
// }

void solve() {
  int n;
  cin >> n;
  vector<ll> a(n);
  for (ll &x : a) cin >> x;

  sort(a.begin(), a.end());

  if (n == 1) {
    cout << (a[0] == 1 ? "YES\n" : "NO\n");
    return;
  }

  ll mx = a[n - 1];
  ll sec = a[n - 2];
  cout << (mx > sec + 1 ? "NO\n" : "YES\n");
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
