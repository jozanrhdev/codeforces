#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  vector<int> grabs(n);
  
  for (int i = 0; i < n; i++) {
    cin >> grabs[i];
  }

  int odd = 0, even = 0;
  for (int i = 0; i < n; ++i) {
    odd += (grabs[i] % 2 == 0) ? grabs[i] : 0;
    even += (grabs[i] % 2 != 0) ? grabs[i] : 0;
  }

  cout << (odd > even ? "YES": "NO") << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}