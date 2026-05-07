#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  string s;
  cin >> s;
  while (true) {
    bool ok = false;
    if (s.size() == 1) 
      break;

    for (int i = s.size() - 1; i > 0; --i) {
      if (s[i] == s[i - 1]) {
        ok = true;

        if (i - 1 > 0) 
          s[i - 1] = s[i - 2];
        else if (i + 1 < s.size())
          s[i - 1] = s[i + 1];

        s.erase(s.begin() + i);
        break;
      }
    }
    if (!ok) break;
  }

  cout << s.size() << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}