#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  string s, ans = "";
  cin >> s;

  for (int i = 0; i < n;) {
    char c = s[i];
    i++;
    while (i < n && s[i] != c) {
      i++;
    }
    ans += c;
    i++;
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