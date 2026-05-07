#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int x, k;
  cin >> x >> k;

  ll n = (x % k == 0) ? 2 : 1;

  if (n == 1) {
    cout << n << endl;
    cout << x << endl;
  } else {
    ll arr1 = ceil(x / 2);
    ll arr2 = x - arr1;
    while (arr1 % k == 0 || arr2 % k == 0) {
      arr1++;
      arr2--;
    }
    cout << n << endl;
    cout << arr1 << " " << arr2 << endl;
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