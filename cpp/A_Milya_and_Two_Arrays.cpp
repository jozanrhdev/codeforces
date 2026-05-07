#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  map<int, int> amp, bmp;

  for (int &x : a) {
    cin >> x;
    amp[x]++;
  }
  for (int &x : b) {
    cin >> x;
    bmp[x]++;
  }

  int b_size = bmp.size();
  int a_size = amp.size();

  cout << ((a_size > 2 || b_size > 2 || (a_size == 2 && b_size == 2)) ? "YES"
                                                                      : "NO")
       << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
