#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  string s, t;
  cin >> s >> t;
  int n = s.size();
  int m = t.size();

  // cout << n << " " << m << endl;
  for (int i = 0; i < m; i++)  
    if (t[i] == s[j]) j++;
  
  cout << j + 1 << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  solve();
  return 0;
}