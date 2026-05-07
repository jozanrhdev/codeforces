#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  string s;
  cin >> s;
  int n = s.size();
  int four = 0, seven = 0;
  for (int i = 0; i < n; ++i) {
    if (s[i] == '4') {
      four++;
    } else if (s[i] == '7') {
      seven++;
    }
  }
  cout << (four == seven && seven == 0 ? -1 : four >= seven ? 4 : 7) << endl;
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  // int t;
  // cin >> t;
  // while(t--)
    solve();
}