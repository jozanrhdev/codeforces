#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  string n;
  cin >> n;

  int sz = n.size();
  string cp = "", cm = "1";
  for (int i = 0; i < sz; i++) {
    cp += cm;
  }
  ll rp = stoll(cp);
  ll x = stoll(n);
  int ans = (sz - 1) * 9;

  while (rp <= x) {
    ans += 1;
    cp = "";
    cm = to_string(stoll(cm) + 1);
    for (int i = 0; i < sz; i++) {
      cp += cm;
    }
    rp = stoll(cp);
  }

  cout << ans << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}