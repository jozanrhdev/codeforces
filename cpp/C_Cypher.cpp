#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

int mod10(int x) {
    return (x % 10 + 10) % 10;
}

void solve() {
  int n;
  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = 0; i < n; i++) {
    int x;
    string s;
    cin >> x >> s;

    int net = 0;
    for (char c: s) 
      if (c == 'U') net++;
      else if (c == 'D') net--;
    
    arr[i] = mod10(arr[i] - net);
  }

  for (int val : arr) 
    cout << val << " ";
  cout << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  while(t--)
    solve();
}