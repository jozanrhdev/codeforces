#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

#define MOD 1000000007

void solve() {
    ll n, k;
    cin >> n >> k;
    ll ans = 0, pot = 1;
    while (k) {
        if (k & 1) {
            ans = (ans + pot) % MOD;
        }
        pot = (pot * n) % MOD;
        k >>= 1;
    }
    cout << ans << "\n";
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}