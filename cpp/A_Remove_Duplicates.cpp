#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

// void solve() {
//   int n;
//   cin >> n;
//   vector<int> a(n);

//   for (int &x : a) cin >> x;

//   unordered_set<int> cp;
//   list<int> ans;
//   for (int i = n - 1; i >= 0; --i) {
//     int m = cp.size();
//     cp.insert(a[i]);
//     int now = cp.size();
//     if (m != now) {
//       ans.push_front(a[i]);
//     }
//   }

//   cout << ans.size() << '\n';
//   for (int x : ans) {
//     cout << x << ' ';
//   }
//   cout << '\n';
// }

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);

  for (int &x : a) cin >> x;

  array<bool, 1001> seen{};
  vector<int> ans;
  // reverse(a.begin(), a.end());

  for (int i = n - 1; i >= 0; --i) {
    if (!seen[a[i]]) {
      seen[a[i]] = true;
      ans.push_back(a[i]);
    }
  }

  reverse(ans.begin(), ans.end());

  cout << ans.size() << '\n';
  for (int i = 0; i < (int)ans.size(); ++i) {
    if (i) cout << ' ';
    cout << ans[i];
  }
  cout << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  solve();
}
