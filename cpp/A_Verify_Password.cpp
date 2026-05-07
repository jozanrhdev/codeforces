#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

// bool validateNumber(char ch) { return ch - '0' < 10 && ch - '0' >= 0; }

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  for (int i = 1; i < n; ++i) {
    if (s[i] < s[i - 1]) {
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
