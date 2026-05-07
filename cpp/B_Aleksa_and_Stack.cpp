#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;

  int x = 1;
  for (int i = 0; i < n; ++i) {
    cout << x << ' ';
    x += (i % 2 == 0 ? 2 : 4);
  }
  cout << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}