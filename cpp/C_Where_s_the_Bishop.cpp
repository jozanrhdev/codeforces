#include <bits/stdc++.h>

using namespace std;

void solve() {
  bool ok = false, get_out = false;
  int x, y;
  for (int i = 0; i < 8; i++) {
    string s;
    cin >> s;
    if (i >= 0 && !get_out) {
      int a = 0;
      for (int j = 0; j < 8; j++) {

        if (s[j] == '#') {
          a++;
          x = i;
          y = j;
        }

        if (j >= 7) {
          if (a == 1 && ok) {
            cout << x + 1 << " " << y + 1 << endl;
            get_out = true;
            break;
          }

          if (a == 2) {
            ok = true;
          }

        }
      }

    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) 
      solve();
}