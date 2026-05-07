#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n; string s; 
  cin >> n >> s;
  for (auto &c : s) c = tolower(c);
  string order = "meow";
  int i = 0, k = 0; // i: índice en s, k: bloque esperado en "meow"
  bool ok = true;
  for (; k < 4; ++k) {
    if (i >= n || s[i] != order[k]) { ok = false; break; }
    while (i < n && s[i] == order[k]) ++i; // consume bloque no vacío
    // siguiente k esperará la siguiente letra
  }
  // válido si consumimos los 4 bloques y llegamos al final
  ok = ok && (k == 4) && (i == n);
  cout << (ok ? "YES\n" : "NO\n");
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}