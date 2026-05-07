#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, sm = 0;
  cin >> n;
  vector<int> a(n);
  for (auto &i : a) {
    cin >> i;
    sm += i;
  }

  int average = sm % n == 0 ? sm / n : -1;
  if (average == -1) {
    cout << "-1\n";
    return;
  }

  int more = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > average) {
      more++;
    }
  }
  cout << more << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}