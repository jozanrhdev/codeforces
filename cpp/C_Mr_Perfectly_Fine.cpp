// #include <bits/stdc++.h>

// #define ll long long

// const ll INF = (1LL << 60);

// using namespace std;

// void solve() {

//   int n;
//   cin >> n;
//   bool one = false, two = false;
//   vector<pair<ll, string>> pairs(n);

//   for (auto& par : pairs) {
//     cin >> par.first >> par.second;
//     if (par.second[0] == '1' && !one) one = true;
//     if (par.second[1] == '1' && !two) two = true;
//   }

//   if (one == false || two == false) {
//     cout << -1 << '\n';
//     return;
//   }

//   ll one_minimum = INT_MAX, two_minimum = INT_MAX, one_idx = -1, two_idx =
//   -1; ll sm = LONG_LONG_MAX;

//   for (int i = 0; i < n; ++i) {
//     ll tmp_one_mn = one_minimum, tmp_two_mn = two_minimum,
//        tmp_one_idx = one_idx, tmp_two_idx = two_idx;
//     if (pairs[i].second[0] == '1' && one_minimum > pairs[i].first) {
//       one_minimum = pairs[i].first;
//       one_idx = (int)i;
//     }

//     if (pairs[i].second[1] == '1' && two_minimum > pairs[i].first) {
//       two_minimum = pairs[i].first;
//       two_idx = (int)i;
//     }

//     ll tmp_sm = ((pairs[i].second[1] == '1' && pairs[i].second[0] == '1')
//                      ? pairs[i].first
//                      : one_minimum + two_minimum);
//     // cout << tmp_sm << ' ' << sm << '\n';
//     // cout << two_minimum << ' ' << one_minimum << '\n';
//     if (tmp_sm < sm) {
//       sm = tmp_sm;
//       if (pairs[i].second[1] == '1' && pairs[i].second[0] == '1') {
//         one_idx = i;
//         two_idx = i;
//         // one_minimum = pairs[i].first;
//         // two_minimum = pairs[i].first;
//       }
//     } else {
//       one_minimum = tmp_one_mn;
//       two_minimum = tmp_two_mn;
//       two_idx = tmp_two_idx;
//       one_idx = tmp_one_idx;
//     }
//     // cout << one_idx << ' ' << two_idx << ' ' << one_minimum << ' '
//     //  << two_minimum << '\n';
//   }

//   if (two_idx == one_idx) {
//     cout << pairs[two_idx].first << '\n';
//     return;
//   }

//   cout << one_minimum + two_minimum << '\n';
// }

// void solve() {
//   int n;
//   cin >> n;
//   ll min10 = LLONG_MAX, min01 = LLONG_MAX, min11 = LLONG_MAX;

//   for (int i = 0; i < n; ++i) {
//     ll m;
//     string s;
//     cin >> m >> s;
//     if (s == "11")
//       min11 = min(min11, m);
//     else if (s == "10")
//       min10 = min(min10, m);
//     else if (s == "01")
//       min01 = min(min01, m);
//   }

//   ll ans = min11;
//   if (min10 != INF && min01 != INF) ans = min(ans, min10 + min01);

//   if (ans == INF)
//     cout << -1 << '\n';
//   else
//     cout << ans << '\n';
// }

// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);
//   int t;
//   cin >> t;
//   while (t--) solve();
// }

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = (1LL << 60);

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int T;
  if (!(cin >> T)) return 0;
  while (T--) {
    int n;
    cin >> n;
    ll min10 = INF, min01 = INF, min11 = INF;
    for (int i = 0; i < n; ++i) {
      ll m;
      string s;
      cin >> m >> s;
      if (s == "10")
        min10 = min(min10, m);
      else if (s == "01")
        min01 = min(min01, m);
      else if (s == "11")
        min11 = min(min11, m);
      // s == "00" => ignorar
    }

    ll ans = min11;
    if (min10 != INF && min01 != INF) ans = min(ans, min10 + min01);

    if (ans == INF)
      cout << -1 << '\n';
    else
      cout << ans << '\n';
  }
  return 0;
}
