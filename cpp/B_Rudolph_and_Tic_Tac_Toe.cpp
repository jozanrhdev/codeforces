#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  string s[3];
  char ans = 'M';

  for (int i = 0; i < 3; ++i) {
    cin >> s[i];
    int cnt = 0;
    for (int j = 0; j < 2; ++j) {
      if (s[i][j] == s[i][j + 1]) {
        cnt++;
      }
    }
    if (cnt == 2 && s[i][0] != '.') {
      ans = s[i][0];
    }
  }

  for (int i = 0; i < 3; ++i) {
    int cnt = 0;
    for (int j = 0; j < 2; ++j) {
      if (s[j][i] == s[j + 1][i]) {
        cnt++;
      }
    }
    if (cnt == 2 && s[0][i] != '.') {
      ans = s[0][i];
    }
  }

  if (ans != 'M') {
    cout << ans << '\n';
    return;
  }

  if (ans == 'M') {
    // cout << s[0][0] << ' ' << s[1][1] << ' ' << s[2][2] << '\n';

    ans = ((s[0][0] == s[1][1] && s[1][1] == s[2][2]) ||
                   (s[0][2] == s[1][1] && s[1][1] == s[2][0])
               ? s[1][1]
               : 'M');
    if (ans == 'M' || ans == '.') cout << "DRAW" << '\n';
    else cout << ans << '\n';
  } else {
    cout << "DRAW" << '\n';
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}