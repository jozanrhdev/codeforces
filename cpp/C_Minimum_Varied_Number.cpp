#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int s; cin >> s;
  int i = 9;
  vector<int> a;

  bool ok = false;
  int sm = 0;
  while (sm != s) {
      sm += i;
      if (sm > s){
        sm -= i;
        break;
      } else {
        a.push_back(i);
      }
      i--;
  }

  if (sm != s) {
    a.push_back(s - sm);
  }

  int m = a.size();
  for (int i = m - 1; i >= 0; --i) {
    cout << a[i];
  }
  cout << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
    solve();
}
