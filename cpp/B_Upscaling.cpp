#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

// void solve() {
//   int n, a = 0, b = 2, c = 2;
//   cin >> n;
//   int m = n * 2;
//   bool ok = false;

//   for (int i = 0; i < m; i++) {
//     c = abs(c - 2);
//     for (int j = 0; j < m; j++) {
//       if (a == 2 && b == 2) {
//         b = (c == 2 ? 2 : 0);
//         a = (c == 2 ? 0 : 2);
//       }

//       if (a == 2) 
//       {
//         ok = true;
//         b++;
//       }



//       // cout << a << " " << b << " " << endl;

//       cout << (ok ? ".": "#");
      
//       if (b == 2) {
//         ok = false;
//         a++;
//       }


//     }
//     int tmp = b;
//     b = a;
//     a = tmp;
//     cout << endl;
//   }
// }

void solve() {
  int n;
  cin >> n;
  int x = 2 * n, k = 0;
  vector<string> v(2);
  char c = '#';

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < x; j++) {
      v[i].push_back(!(k&1) ? '#' : '.');
      if (j&1) k++;
    }
  }
  if (!(n&1)) reverse((v[1]).begin(), (v[1]).end());
  k = 0;

  for (int i = 0; i < x; i++) {
    cout << (!(k&1) ? v[0] : v[1]);
    if (i & 1) k++;
    cout << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}