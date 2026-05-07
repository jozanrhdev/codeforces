#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

// int n;

// void solve() {
//   cin >> n;
//   vector<pair<int, int>> v(n);
  
//   for (int i = 0; i < n; i++) {
//     cin >> v[i].first;
//     v[i].second = 1;
//   }

//   int ans = 0;
//   for (int i = 0; i < n; i++) {
//     for (int j = i + 1; j < n; j++) {
//       if (v[i].first == v[j].first && v[j].second > 0 && v[i].second > 0 && i != j) {
//         ans++;
//         v[i].second--;
//         v[j].second--;
//       }
//     }
//   }
//   cout << ans << '\n';
// }

void solve() {
  int n;
  cin >> n;
  map<int, int> freq;

  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    freq[x]++;
  }

  int ans = 0;
  for (auto [_, cnt]: freq) {
    ans += cnt / 2;
  }

  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
  solve();
}