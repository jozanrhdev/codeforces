#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  string s;
  cin >> s;
  int ans = 0;
  int n = s.length();

  for (int i = n - 1; i >= 1; i--)
    ans += 9; 

  cout << (ans + s[0] - '0') << "\n";
}

<<<<<<< HEAD
=======

>>>>>>> 25df4e6410578b9362522edcf1d92345f8aa1d97
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}