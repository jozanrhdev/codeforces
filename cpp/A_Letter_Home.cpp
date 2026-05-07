#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, s;
  cin >> n >> s;
  vector<int> arr(n);
  for (auto &x : arr) cin >> x;
  int L = arr.front(), R = arr.back();

  if (s <= L) { cout << R - s << "\n"; return; }
  if (s >= R) { cout << s - L << "\n"; return; }

  int ans = (R - L) + min(s - L, R - s);
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

