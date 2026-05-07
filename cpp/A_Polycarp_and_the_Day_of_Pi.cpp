#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

const string PI = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

void solve() {
  string s;
  cin >> s;
  int n = s.length(), ans = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] != PI[i]) {ans = i; break;}
    if (s[i] == PI[i]) ans++;
  }
  cout << ans << endl;
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