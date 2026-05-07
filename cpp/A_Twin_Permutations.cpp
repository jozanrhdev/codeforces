#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, mx = 0;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    mx = max(mx, x);
    arr[i] = x;
  }

  for (int i = 0; i < n; i++) {
    cout << mx - arr[i] + 1 << " ";
  }
  cout << "\n";
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
} 