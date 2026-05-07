#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, ans = 0;
  cin >> n;
  string enemy, player;
  cin >> enemy >> player;

  for (int i = 0; i < n; i++) {
    if (player[i] == '1') {
      if (enemy[i] == '0') { // Avanza directo
        ans++;
        enemy[i] = '2';
      }
      else if (i > 0 && enemy[i-1] == '1') { // Captura izq
        ans++;
        enemy[i-1] = '2';
      }
      else if (i+1 < n && enemy[i+1] == '1') { // Captura der
        ans++;
        enemy[i+1] = '2';
      }
    }
  }
  cout << ans << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}