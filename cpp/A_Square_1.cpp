#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

int n = 4;

void solve() {
  set<int> s;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    s.insert(a);
  }

  int x, y, i = 0;
  for (auto v : s) {
    if (i == 0) {
      x = v;
      i++;
    } else if (i == 1) {
      y = v;
      i++;
    }
  }

  cout << (abs(x - y) * abs(x - y)) << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}