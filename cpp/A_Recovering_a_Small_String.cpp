#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  char a, b, c;
  string s = "abcdefghijklmnopqrstuvwxyz";
  cin >> n;
  if ((int) (n - 2) / 26 == 0) {
    cout << "aa";
    cout << s[n - 2 - 1];
    cout << endl;
  } else if ((int) (n - 2) / 26 == 1) {
    cout << "a";
    cout << s[n - 27 - 1];
    cout << "z";
    cout << endl;
  } else {
    cout << s[n - 52 - 1];
    cout << "z";
    cout << "z";
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