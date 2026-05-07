#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve() {
  ll n, ans = 0;
  cin >> n;
  
  ans += n;
  while (n > 1) {
    n /= 2;
    ans += n;
  }

  cout << ans << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) 
      solve();
}