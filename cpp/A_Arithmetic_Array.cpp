#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  int n;
  cin >> n;
  int a[n], sm = 0;
  for (int i = 0; i < n; i++) cin >> a[i], sm += a[i];

  cout << ((float) sm / n < 1.00 ? 1 : (float) sm / n > 1.00 ? sm - n : 0) << endl; 
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  while (n--)
    solve();
}