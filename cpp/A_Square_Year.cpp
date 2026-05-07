#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array


void solve() {
    string s;
    cin >> s;
    int year = stoi(s);

    int root = sqrt(year);
    if (root * root != year) {
        cout << -1 << '\n';
        return;
    }

    // Solo hace falta UN par (a, b) con a + b = root, 0 ≤ a, b ≤ 9999
    for (int a = 0; a <= root; ++a) {
        int b = root - a;
        if (b >= 0 && b <= 9999) {
            cout << a << " " << b << '\n';
            return;
        }
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