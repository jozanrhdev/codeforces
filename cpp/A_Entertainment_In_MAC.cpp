#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

// string invert(string &s) {
//   string ans = "";
//   int m = s.size();

//   for (int i = m - 1; i >= 0; --i) {
//     ans += s[i];
//   }

//   return ans;
// }

// void solve() {
//   int n;
//   cin >> n;
//   string s;
//   cin >> s;
//   string ans = "";
//   string tmp = invert(s);
//   int m = s.size();

//   if (tmp < s) {
//     ans = invert(s);
//     n--;
//   }

//   if (n % 2 != 0) {
//     ans += s;
//   }

//   if (ans == "") {
//     ans = s;
//   }

//   cout << ans << '\n';
// }

string rev(const string &s) {
  string t = s;
  reverse(t.begin(), t.end());
  return t;
}

void solve() {
  int n;
  string s;
  cin >> n >> s;

  string t = rev(s);
  if (t < s) {
    cout << t << s << '\n';
  } else {
    cout << s << '\n';
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}
