#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);

  int pro = 0, against = 0;
  for (int &x : a) {
    cin >> x;
    if (x == 1 || x == 3) {
      pro++;
    }
  }

  cout << pro << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}