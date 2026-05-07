#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  map<char, int> bp;
  map<char, int> ep;

  int m = s.size();
  for (int i = 0; i < m - 1; ++i) {
    bp[s[i]]++;
  }

  for (int i = 1; i < m; ++i) {
    ep[s[i]]++;
  }

  for (auto &[k, v] : bp) {
    if (v >= 2) {
      cout << "Yes" << '\n';
      return;
    }
  }

  for (auto &[k, v] : ep) {
    if (v >= 2) {
      cout << "Yes" << '\n';
      return;
    }
  }

  cout << "No" << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
