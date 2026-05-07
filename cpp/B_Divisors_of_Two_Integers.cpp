#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &x : a) cin >> x;

  sort(a.begin(), a.end(), greater<int>());
  int x = a[0];

  unordered_map<int, int> cnt;
  cnt.reserve(n * 2);
  for (int v : a) ++cnt[v];

  // Quitar una copia de cada divisor DISTINTO de x
  unordered_set<int> used;
  used.reserve(n * 2);
  for (int v : a) {
    if (x % v == 0 && !used.count(v)) {
      --cnt[v];
      used.insert(v);
    }
  }

  // El máximo que siga con cnt>0 es y
  int y = 1;
  for (int v : a)
    if (cnt[v] > 0) {
      y = v;
      break;
    }

  cout << x << ' ' << y << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  // int t;
  // cin >> t;
  // while(t--)
  solve();
}