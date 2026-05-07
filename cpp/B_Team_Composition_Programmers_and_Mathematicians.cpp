
#include <bits/stdc++.h>

using namespace std;

#define ar array

// void solve() {
//   int a, b;
//   cin >> a >> b;
//   int one = min((a / 3), b);
//   int two = min(a, (b / 3));
//   int three = min((a / 2), (b / 2));
//   int answer = max(one, max(two, three));

//   if (answer == one || answer == two) {
//     int primary = a - (answer * ((one == answer) ? 3 : 1));
//     int secondary = b - (answer * ((two == answer) ? 3 : 1));
//     // cout << a << ' ' << answer << ' ' << one << '\n';
//     cout << primary << ' ' << secondary << ' ' << answer << '\n';
//     cout << ((primary > 0 && secondary > 2) || (primary > 2 && secondary > 0)
//     ||
//                      (primary > 1 && secondary > 1)
//                  ? ++answer
//                  : answer)
//          << '\n';
//     return;
//   }

//   cout << ((a - (answer * 2)) > 0 && (b - (answer * 2)) > 2 ||
//                    (a - (answer * 2)) > 2 && (b - (answer * 2)) > 0
//                ? ++answer
//                : answer)
//        << '\n';
// }

#define int64 long long

void solve() {
  int64 a, b;
  cin >> a >> b;
  int64 ans = min((a + b) / 4, min(a, b));
  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
