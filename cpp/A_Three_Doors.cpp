#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int key, a, b, c;
  cin >> key >> a >> b >> c;
  int arr[4] = {0, a, b, c};

  int cnt = 1;
  while (arr[key] != 0) {
    key = arr[key];
    cnt++;
  }

  cout << (cnt == 3 ? "YES" : "NO") << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}