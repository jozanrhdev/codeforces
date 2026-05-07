#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

bool isPalindrome(const string &s) {
  string t = s;
  reverse(t.begin(), t.end());

  return t == s;
}

void solve() {
  string s;
  cin >> s;
  int n = s.size();
  map<char, int> mp;

  for (int i = 0; i < n; ++i) {
    mp[s[i]]++;
  }

  int one = 0, two = 0, mdf = 0;
  for (auto &[k, v] : mp) {
    if (v % 2 == 0) {
      two++;
    } else if (v % 2 == 1) {
      one++;
    }

    if (v == 1 && !mdf) {
      mdf++;
    }
  }

  cout << (one > 1                                      ? "NO\n"
           : two > 1 || (two == 1 && one == 1 && n > 3 && !mdf) ? "YES\n"
                                                        : "NO\n");
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
}