#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, a, b, c;
  cin >> n >> a >> b >> c;

  int x = a + b + c;
  int ans = floor(n / x) * 3, record = floor(n / x), i = 0;
  record *= x;
  // cout << ans << " " << record << '\n';
  int arr[3] = {a, b, c};
  while (i < 3 && record < n) {
    // cout << record << " " << arr[i] << '\n'; 
    record += arr[i];
    ans++;
    i++;
    if (record >= n) break;
  }
  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
    solve();
}