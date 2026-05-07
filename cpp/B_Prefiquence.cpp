#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, m;
  cin >> n >> m;
  string s1, s2;
  cin >> s1 >> s2;

  int j = 0;
  for (int i = 0; i < m; i++) {
    if (s2[i] == s1[j]) {
      j++;
    }
  }
  cout << j << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
