#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n), b;
  for (int i = 0; i < n; i++) cin >> a[i];

  sort(a.begin(), a.end());
  int ans = 0;
  for (int i = 1; i < n; i++) {
    if (a[i] - a[i - 1] > k) {
      ans++;
      b.push_back(ans);
      ans = 0;
    } else {
      ans++;
    }
  }
  ans++;
  b.push_back(ans);


  if ((int) b.size() == 0) {
    cout << 0 << endl;
    return;
  }
  int mx = b[0];
  for (int i = 0; i < b.size(); i++)  {
    // cout << b[i] << " ";
    mx = max(mx, b[i]);
  }
  
  // cout << endl;
  cout << n - mx << endl;
}
// 1 3 3 4 5 7 8 10

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--)
    solve();
}