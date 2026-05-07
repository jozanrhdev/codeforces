#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, ans = 0;
  cin >> n;

  // vector<int> arr(n);
  int b;
  cin >> b;

  for (int i = 0; i < n - 1; i++)  {
    int a;
    cin >> a;
    if (abs(a - b) == 5 || abs(a - b) == 7) {
      ans++;
      b = a;
    }
  }

  cout << (ans == n - 1 ? "YES" : "NO") << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}