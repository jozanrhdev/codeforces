#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

int n;

void solve() {
  cin >> n;
  vector<int> a(n);
  int chest = 0, biceps = 0, back = 0;
  for (int i = 0, x; i < n; ++i) {
    cin >> x;
    if (i % 3 == 0) {
      chest += x;
    } else if (i % 3 == 1) {
      biceps += x;
    } else {
      back += x;
    }
  }

  int mx = max(chest, max(biceps, back));
  if (mx == chest) {
    cout << "chest\n";
  } else if (mx == biceps) {
    cout << "biceps\n";
  } else {
    cout << "back\n";
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  solve();
}
