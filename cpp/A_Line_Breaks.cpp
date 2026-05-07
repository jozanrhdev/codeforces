#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

// void generateCombinations(int n, int k, int start, vector<string>& currentCombination, vector<vector<string>>& result) {
//   if (currentCombination.size() == k) {
//     result.push_back(currentCombination);
//     return;
//   }

//   for (int i = start; i <= n; ++i) {
//     currentCombination.push_back(currentCombination[i]);
//     generateCombinations(n, k, i + 1, currentCombination, result);
//     currentCombination.pop_back(); // Backtrack
//   }
// }

// void solve() {
//   int n, m;
//   cin >> n >> m;
//   vector<string> cur(n);
//   int i = n + 1;

//   for (auto &a : cur) cin >> a;

//   do {
//     vector<vector<string>> comb;

//     generateCombinations(n, i, 0, cur, comb);
//     for (int j = 0; j < comb.size(); ++j) {
//       for (int k = 0; k < i; ++k) {
//         cout << comb[j][k] << " ";
//       }
//     }
//     cout << "i: " << i << "\n";
//     i--;
//   } while(i > 0);
// }

void solve() {
  int n, m; 
  cin >> n >> m;
  int ans = 0, sum = 0;
  bool stopped = false; // ya se rompió el prefijo
  for (int i = 0; i < n; ++i) {
    string w; cin >> w;
    if (!stopped && sum + (int)w.size() <= m) {
      sum += (int)w.size();
      ++ans;
    } else {
      // a partir de aquí, ya no se puede ampliar el prefijo
      stopped = true;
    }
  }
  cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    while (t--) solve();
    return 0;
}
