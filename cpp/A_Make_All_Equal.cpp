#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  vector<int> freq(n + 1, 0);
  int mx = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    mx = max(mx, ++freq[x]);
  }

  cout << (n - mx) << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
