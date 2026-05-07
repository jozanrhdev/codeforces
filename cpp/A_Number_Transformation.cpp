#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int a, b; cin >> a >> b;

  if (b % a != 0) {
    cout << 0 << ' ' << 0 << '\n';
  } else {
    cout << 1 << ' ' << (b / a) << '\n';
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}