#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

// void solve() {
//   int n; cin >> n;
//   unordered_map<int, tuple<int, vector<int>>> pr;

//   for (int i = 0; i < n; i++) {
//     int x; cin >> x;
//     auto &[cnt, vec] = pr[x];
//     cnt++;
//     vec.push_back(i);
//   }

//   int ans = 0;
//   for (auto &[_, v]: pr) {
//     auto &[cnt, vec] = v;
//     int m = vec.size();
//     if (cnt > 1) {
//       if (ans < vec[m - 2] + 1) {
//         ans = vec[m - 2] + 1;
//       }
//     }
//   }
//   cout << ans << '\n';
// }

void solve() {
  int n; cin >> n;
  vector<int> a(n);

  for (int &x: a) cin >> x;

  vector<char> seen(n + 1, 0);
  int i = n - 1;

  while (i >= 0 && !seen[a[i]]) {
    seen[a[i]] = 1;
    --i;
  }

  cout << i + 1 << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}