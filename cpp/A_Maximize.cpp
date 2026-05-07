#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

ll gcd(ll a, ll b) {
  if (b > a) {
    return gcd(b, a);
  }

  if (b == 0) {
    return a;
  }

  return gcd(b, a % b);
}

void solve() {
  ll n;
  cin >> n;
  ll a = (pow(2, 31) - 1) * -1, b = -1;
  for (ll i = 1; i < n; i++) {
    if (gcd(n, i) + i > a) {
      a = gcd(n, i) + i;
      b = i;
    }
  }
  cout << b << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  ll t;
  cin >> t;
  while(t--)
    solve();
}