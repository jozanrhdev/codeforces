#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n, d;
  cin >> n >> d;
  string s;
  cin >> s;

  int jumps = 0, pos = 0;
  while (pos < n - 1) {
    int next = -1;
    // Busca el salto más lejano posible en el rango [pos + 1, pos + d];
    for (int i = min(pos + d, n - 1); i >= pos + 1; i--) {
      if (s[i] == '1') {
        next = i;
        break;
      }
    }
    if (next == -1) {
      cout << -1 << endl;
      return;
    }
    pos = next;
    jumps++;
  }

  cout << jumps << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  solve();
}