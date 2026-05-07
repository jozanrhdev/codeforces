#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  unordered_map<int, ll> freq;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    int key = a[i] - i;
    freq[key]++;
  }

  ll ans = 0;
  for (auto [_, f] : freq) {
    ans += f * (f - 1) / 2;  // combinatoria C(f, 2)
  }

  cout << ans << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
