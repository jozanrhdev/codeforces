#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

int n, d;
string s;

void solve() {
  cin >> n >> d;
  cin >> s;

  int len = s.size();
  string ans = "";
  for (int i = 0; i < len; i++) {
    if (s[i] - '0' < d) {
      ans = s.substr(0, i) + to_string(d) + s.substr(i);
      break;
    }
  }
  if (ans == "") ans = s + to_string(d);

  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
  solve();
}