#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

string rev(string s) {
  string ans = "";
  for (int i = s.size() - 1; i >= 0; --i) {
    ans += s[i];
  }
  return ans;
}

void solve() {
  int n, m;
  cin >> n >> m;
  vector<string> arr(n);

  for (auto &s : arr) cin >> s;

  string left = "", right = "", middle = "";

  vector<string> rb(n);
  for (int i = 0; i < n; ++i) {
    rb[i] = rev(arr[i]);
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i != j && arr[i] == rb[j]) {
        left += arr[i];
        right = arr[j] + right;
        arr[i] = "";
        arr[j] = "";
        rb[j] = "";
        rb[i] = "";
      }
      if (arr[i] == rb[j]) {
        string tmp = middle + arr[i];
        if (rev(tmp) == tmp) {
          middle = tmp;
          arr[i] = "";
          rb[j] = "";
        }
      }
    }
  }

  int large = left.size() + middle.size() + right.size();
  cout << large << '\n';
  cout << left << middle << right << '\n';


}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  // int t;

  // cin >> t;
  // while(t--)
  solve();
}