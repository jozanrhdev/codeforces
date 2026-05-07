#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

int n = 7;
vector<int> b(n);

vector<vector<int>> combinations(vector<int> v, int k) {
  int n = v.size();
  if (k > n) {
    return {};
  }

  vector<bool> taken(n);
  fill(taken.begin() + n - k, taken.end(), true);
  vector<int> cur;
  vector<vector<int>> ans;

  do {
    cur.clear();
    for (int i = 0; i < n; i++) {
      if (taken[i]) {
        cur.push_back(v[i]);
      }
    }
    ans.push_back(cur);
  } while (next_permutation(taken.begin(), taken.end()));

  return ans;
}

void solve() {
  for (auto &x: b) cin >> x;

  vector<vector<int>> ans = combinations(b, 3);
  for (auto &x: ans) {
    // cout << x[0] << ' ' << x[1] << ' ' << x[2] << '\n';
    if (x[0] + x[1] + x[2] == b[6]) {
      cout << x[0] << ' ' << x[1] << ' ' << x[2] << '\n';
      return;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
  solve();
}