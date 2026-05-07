#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, k;
  cin >> n >> k;
  for (int i = 0; i < n;) {
    string s;
    cin >> s;
    for (int j = 0; j < n; j+=k) {
      cout << s[j];
    }
    if (k > 1) {
      for (int j = 0; j < k - 1; j++) {
        cin >> s;
      }
    }
    cout << '\n';
    i+=k;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
    solve();
}