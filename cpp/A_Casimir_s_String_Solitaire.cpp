#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  string s;
  cin >> s;
  int A = 0, B = 0, C = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'A') {
      A++;
    } else if (s[i] == 'B') {
      B++;
    } else {
      C++;
    }
  }

  cout << (B == A + C ? "YES" : "NO") << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}