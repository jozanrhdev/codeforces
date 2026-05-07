#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  string s;
  char c;
  cin >> s;
  cin >> c;

  int n = s.size();

  for (int i = 0; i < n; ++i) {
    if (s[i] == c && i % 2 == 0) {
      cout << "YES\n";
      return;
    }
  }

  cout << "NO\n";

}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}