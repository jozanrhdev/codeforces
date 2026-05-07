#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  int h1 = ceil((double) n / 3.0) + 1;
  int h2 = h1 - 1;
  int h3 = n - h1 - h2;
  if (h3 == 0) {
    h3++;
    h2--;
  }
  cout << h2 << ' ' << h1 << ' ' << h3 << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}