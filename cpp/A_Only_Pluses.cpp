#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int a, b, c, n = 5;
  cin >> a >> b >> c;
  // int max0 = a * b * c;
  // int d = max(a, max(b, c));
  // int arr = [d - a, d - b, d - c];

  while (n > 0) {
    int a1 = a + 1;
    int b1 = b + 1;
    int c1 = c + 1;
    int max1 = a1 * b * c;
    int max2 = a * b1 * c;
    int max3 = a * b * c1;
    int def = max(max1, max(max2, max3));
    if (def == max1) {
      a++;
      n--;
    } else if (def == max2) {
      b++;
      n--;
    } else {
      c++;
      n--;
    }
  }
  cout << a * b * c << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}