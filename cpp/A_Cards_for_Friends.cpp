#include <bits/stdc++.h>

using namespace std;

#define ll long long      
#define ar array

void solve() {
  int w, h, n;
  cin >> w >> h >> n;
  int cp = 1;

  while (w % 2 == 0 || h % 2 == 0) {
    if (w % 2 == 0) {
      cp *= 2;
      w /= 2;
    }
    else if(h % 2 == 0) {
     cp *= 2;
     h /= 2;
    }
  }

  cout << (cp >= n ? "YES" : "NO") << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}