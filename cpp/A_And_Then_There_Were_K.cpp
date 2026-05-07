#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  ll n;
  cin >> n;

  // cout << (64 & 63) << endl;
  // if (n <= 2) {
  //   cout << n - 1 << endl;
  //   return;
  // }
  // if (n == 3) {
  //   cout << 1 << endl;
  //   return;
  // }
  // ll ok = n & (n - 1);
  // while (ok != 0)  {
    // cout << n << endl;
    // n--;

    // ok = n & (n - 1);
  // }
  ll pw = floor(log2(n));
  // cout << ((6 & 5) != 0) << endl;
  cout << ((ll) pow(2, pw) - 1) << endl;
  // for (int i = 7; i >= 0; i--)  {
    // op &= i;
    // cout << op << " ";
  // }
  // cout << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}