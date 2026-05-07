#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  map<char, int> a, b;
  string s, t;
  int n;
  cin >> n;
  cin >> s >> t;

  for (int i = 0; i < n; i++) {
    a[s[i]]++;
    b[t[i]]++;
  }
  for (char c = 'a'; c <= 'z'; c++) {
    if (a[c] != b[c]) {
      cout << "NO\n";
      return;
    }
  }

  cout << "YES\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}