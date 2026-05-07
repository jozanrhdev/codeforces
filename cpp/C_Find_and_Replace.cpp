#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  string s;
  cin >> n >> s;

  map<char, char> m;

  bool ok = true;
  for (int i = 0; i < n; i++) {
    char k = s[i];
    char v = (i % 2 == 0) ? 'a' : 'b';
    if (m[k] != NULL && m[k] != v) {
      ok = false;
      break;
    } else {
      m[k] = v;
    }
  }

  cout << (ok ? "YES\n" : "NO\n");
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
    
  int t;
  cin >> t;
  while(t--)
    solve();
}