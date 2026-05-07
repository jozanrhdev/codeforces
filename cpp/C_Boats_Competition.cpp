#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

// void solve() {
//   int n;
//   cin >> n;
//   vector<int> cnt(n + 1, 0);

//   for (int i = 0, x; i < n; i++) {
//     cin >> x;
//     cnt[x]++;
//   }

//   int best = 0;
//   for (int s = 2; s <= 2 * n; s++) {
//     int teams = 0;
//     for (int x = 1; x <= s / 2; ++x) {
//       int y = s - x;
//       if (y < 1 || y > n) continue;
//       if (x == y)
//         teams += cnt[x] / 2;
//       else
//         teams += min(cnt[x], cnt[y]);
//     }
//     best = max(best, teams);
//   }
//   cout << best << '\n';
// }

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int &x : a) cin >> x;
  sort(a.begin(), a.end());

  int best = 0;
  for (int s = 2; s <= 2 * n; ++s) {
    int l = 0, r = n - 1, teams = 0;
    while (l < r) {
      int sm = a[l] + a[r];
      if (sm == s) {
        teams++;
        l++;
        r--;
      } else if (sm < s)
        l++;
      else
        r--;
    }
    best = max(best, teams);
  }
  cout << best << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}