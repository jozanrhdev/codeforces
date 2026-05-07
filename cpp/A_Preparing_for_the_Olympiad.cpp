#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n; 
  cin >> n;
  vector<int> a(n), b(n + 1);
  for (auto &x : a) cin >> x;
  for (int i = 0; i < n; i++) cin >> b[i];

  b[n] = 0;
  int mono = 0, stereo = 0;

  for (int i = 0; i < n; i++) {
    if (b[i + 1] < a[i]) {
      mono += a[i];
      stereo += b[i + 1];
    }
  }
  
  cout << mono - stereo << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}