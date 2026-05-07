#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, k;
  cin >> n >> k;
  int m = (n - k <= 0 ? 0 : n - k);
  // 1 2 3 / 6: 1 -> impar
  // 2 3 5 / 6: 2 -> impar
  // 3 4 7 / 6: 3 -> par
  // 4 5 9 / 6: 4 -> par
  // 5 6 11 / 6: 5 -> impar
  // 6 7 13 / 6: 6 -> impar
  // 7 8 15 / 6: 7 -> par
  // 8 9 17 / 6: 8 -> par
  // 9 10 19 / 6: 9 -> impar
  // 10 11 21 / 6: 10 -> impar
  // 11 12 23 / 6: 11 -> par
  // 12 13 25 / 6: 12 -> par
  // cout << n << ' ' << m << '\n';
  int leaves = (n % 4 == 1 || n % 4 == 2 ? 1 : 0);
  int olds = (m % 4 == 1 || m % 4 == 2 ? 1 : 0);

  // cout << leaves << ' ' << olds << '\n';
  cout << (leaves ^ olds ? "NO" : "YES") << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}