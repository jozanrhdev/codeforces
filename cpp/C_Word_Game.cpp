#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int words;
  cin >> words;
  int total = words * 3;
  map<string, int> mp;
  vector<vector<string>> arr(3);
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < words; j++) {
      string s;
      cin >> s;
      arr[i].push_back(s);
      mp[s]++;
    }
  }

  // clean map where value is more tan 3
  // for (auto &[k, v] : mp) {
  //   if (v > 3) mp.erase(k);
  // }

  int ans[] = {total, total, total};
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < words; j++) {
      if (mp[arr[i][j]] == 2) ans[i] -= 2;
      if (mp[arr[i][j]] == 3) ans[i] -= 3;
    }
  }

  cout << ans[0] << " " << ans[1] << " " << ans[2] << "\n";
}

int main() {  
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}