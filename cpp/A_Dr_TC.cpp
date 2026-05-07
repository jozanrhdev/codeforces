#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  int one = count(s.begin(), s.end(), '1');
  int zero = n - one;

  cout << (one * (one - 1) + zero * (one + 1)) << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
    
  int t;
  cin >> t;
  while(t--)
    solve();
}