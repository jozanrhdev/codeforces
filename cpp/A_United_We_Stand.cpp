#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) 
    cin >> arr[i];

  sort(arr.begin(), arr.end());

  if (arr[0] == arr[n - 1])
    cout << -1 << endl;
  else {

  ll i = 0;
  while (arr[i] == arr[i + 1])
    i++;

  cout << i + 1 << ' ' << n - i - 1 << endl;

  for (ll j = 0; j < i + 1; j++) 
    cout << arr[j] << ' ';
  cout << endl;

  for (ll j = i + 1; j < n; j++) 
    cout << arr[j] << ' ';
  cout << endl;
  }
  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}