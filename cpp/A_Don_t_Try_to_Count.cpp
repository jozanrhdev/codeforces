#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

// void solve() {
//   int n, m;
//   cin >> n >> m;

//   string x, s;
//   cin >> x >> s;

//   int sz = s.length(), ans = 0, c = -2;
//   int i = 0, j = sz;
//   bool ok = false;
//   if (x.substr(i, j) == s) {
//     ok = true;
//   }

//   do {
//     i = 0;

//     if (x.length() >= sz) {
//       // cout << i << " " << j << " " << x.substr(i, j) << " " << ans << endl;
//       while (i < x.length() - j + 1) {
//         if (x.substr(i, j) == s) {
//           ok = true;
//           break;
//         }
//         // ans++;
//         i++;
//       }
//     } 

//     if (ok) break;
//     ans++;
//     x += x;
//     c++;

//   } while (x.length() <= sz * 2 || c < 1);
//   cout << (ok ? ans : -1) << endl;
// } 

void solve() {
  int n, m;
  string x, s;
  cin >> n >> m >> x >> s;
  int ans = -1;

  for (int i = 0; i < 6; i++) {
    if (x.find(s) != -1) {
      ans = i;
      break;
    }
    x += x;
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