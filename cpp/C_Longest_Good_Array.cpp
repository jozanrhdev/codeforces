#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

// void solve() {
//   int l, r;
//   cin >> l >> r;
//   int md = r - l;
//   int i = 1, sm = 0;
//   while (sm <= md) {
//     sm += i;
//     i++;
//   }
//   cout << i - 1 << "\n";
// }

void solve() {
  ll l, r;
  cin >> l >> r;
  ll md = r - l;
  long double disc = sqrtl(1.0L + 8.0L * md);
  ll k = (ll) floor((disc - 1.0L) / 2.0L);
  cout << k + 1 << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}