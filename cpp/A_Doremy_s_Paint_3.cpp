#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, c = 0, a = 0, b = 0;
  bool ok = true;
  cin >> n;

  vector<int> dp(100000 + 1);
  for (int i = 0; i < n; i++)  {
    int x;
    cin >> x;
    dp[x]++;
  }

  for (int i = 1; i < 100000 + 1; i++) {
   if (dp[i] > 0){
      c++;

      if (c > 2) {
        ok = false;
        break;
      }

      if (a == 0) {
        a = dp[i];
        continue;
      }

      if (b == 0) {
        b = dp[i];
      }
    }
  }


  if (ok) {
    // cout << a << " " << b << endl;
    cout << (abs(a - b) <= 1 || a == 0 || b == 0 ? "Yes" : "No") << endl;
  } else {
    cout << "No" << endl;
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