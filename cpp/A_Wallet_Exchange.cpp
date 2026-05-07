#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int a, b;
  cin >> a >> b;
  //  cout << ((a + b) % 2 == 0 ? "Bob" : "Alice") << "\n";
  cout << (abs(a - b) > 1 ? "Alice" : "Bob") << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}