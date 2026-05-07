#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n; cin >> n;
  vector<ll> a(n);

  for (int i = 0; i < n; ++i) cin >> a[i];

  ll mx = *max_element(a.begin(), a.end() - 1);
  cout << a.back() + mx << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}

