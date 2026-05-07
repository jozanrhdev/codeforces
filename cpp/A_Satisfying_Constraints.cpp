#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  vector<pair<int, int>> cur(n);
  vector<int> nt;

  int mx = 0, mn = INT_MAX;
  for (auto &[f, s] : cur) {
    cin >> f >> s;

    if (f == 1) {
      mx = max(mx, s);
    } else if (f == 2) {
      mn = min(mn, s);
    } else {
      nt.push_back(s);
    }
  }

  int cnt = 0, m = nt.size();

  for (int i = 0; i < m; ++i) {
    if (nt[i] >= mx && nt[i] <= mn) {
      cnt++;
    }
  }

  int ans = mn - mx - cnt + 1;
  cout << (ans < 0 ? 0 : ans) << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}