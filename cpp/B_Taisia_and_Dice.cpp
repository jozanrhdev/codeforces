#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define arr array

void solve() {
  int n, s, r;
  cin >> n >> s >> r;

  int x = s - r;
  vector<int> a(n - 1, 1);
  int rem = r - (n - 1);

  for (int i = 0; i < n - 1 && rem > 0; ++i) {
    int add = min(rem, x - 1);
    a[i] += add;
    rem -= add;
  }

  for (int v: a) cout << v << ' ';
  cout << x << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
