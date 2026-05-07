#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, ans = 0, acc = 0;
  cin >> n;
  string bg, nd;
  cin >> bg >> nd;  

  for (int i = 0; i < n; i++) {
    if (bg[i] == '1' && nd[i] == '0') {
      acc++;
    } else if (bg[i] == '0' && nd[i] == '1') {
      ans++;
    }
  }
  cout << (acc > ans ? acc : ans)  << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
    solve();
}