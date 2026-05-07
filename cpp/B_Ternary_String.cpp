#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    vector<int> cnt(4, 0); // cnt[1], cnt[2], cnt[3]
    int l = 0, ans = n+1;
    for (int r = 0; r < n; ++r) {
        cnt[s[r] - '0']++;
        // Mientras la ventana sea válida, intenta minimizarla
        while (cnt[1] > 0 && cnt[2] > 0 && cnt[3] > 0) {
            ans = min(ans, r - l + 1);
            cnt[s[l] - '0']--;
            l++;
        }
    }
    cout << (ans == n+1 ? 0 : ans) << "\n";
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}