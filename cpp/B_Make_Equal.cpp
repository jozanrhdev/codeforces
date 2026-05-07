#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, sm = 0;
  cin >> n;
  vector<int> arr(n);
  for (auto &x : arr) {
    cin >> x;
    sm += x;
  }

  int value = sm / n;
  int surplus = 0;
  for (int i = 0; i < n; i++) {
    // cnt += (arr[i] > value ? arr[i] - value : 0);
    // cout << cnt << "\n";
    // if (arr[i] < value) {
    //   int diff = value - arr[i];
    //   arr[i] = value;
    //   cnt -= diff;
    //   if (cnt < 0) {
    //     cout << "NO\n";
    //     return;
    //   }
    // }
    if (arr[i] > value) {
      surplus += arr[i] - value;
    } else {
      int need = value - arr[i];
      surplus -= need;
      if (surplus < 0) {
        cout << "NO\n";
        return;
      }
    }
  }

  cout << "YES\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}