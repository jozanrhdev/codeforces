#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

const int n = 3;

void solve() {
  char ans;
  for (int i = 0; i < n; i++) {
    string s;
    bool a = false, b = false, c = false;
    cin >> s;
    for (int j = 0; j < n; j++) {
      if (s[j] == 'A') {
        a = true;
      } else if (s[j] == 'B') {
        b = true;
      }
      else if (s[j] == 'C') {
        c = true;
      } 
    }
    if (!a) ans = 'A';
    else if (!b) ans = 'B';
    else if (!c) ans = 'C';
  }
  cout << ans << endl;
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}