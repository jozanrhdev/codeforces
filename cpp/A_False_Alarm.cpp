#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

int n, x;
vector<int> a;

void solve() {
  cin >> n >> x;
  a.resize(n + 1);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  a[n] = 0;

  int i;
  for (i = 0; i < n + 1; i++) {
    if (a[i] == 1 && i + x < n + 1) {
      if (a[i + x] != 0) {
        cout << "NO\n";
        return;
      }
      i += x;
      break;
    }
  }

  for (int j = i; j < n + 1; j++) {
    if (a[j] == 1) {
      cout << "NO\n";
      return;
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