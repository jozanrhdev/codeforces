#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int a, b;
  cin >> a >> b;
  int c = b % 2;
  // cout << 0 % 2 << endl;
  cout << ((c == 0) && (a % 2) == 0 ? "YES" : (c == 1) && a - 2 >= 0 && ((a - 2) % 2) == 0 ? "YES" : "NO") << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  while (n--)
    solve();
}