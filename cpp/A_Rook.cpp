#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

void solve() {
  string position;
  cin >> position;
  char w = position[0];
  char h = position[1];
  char width[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
  char height[] = {'1', '2', '3', '4', '5', '6', '7', '8'};

  for (int i = 0; i < 8; i++)  {
    if (width[i] == w) continue;
    cout << width[i] << h << " ";
  }

  for (int i = 0; i < 8; i++)  {
    if (height[i] == h) continue;
    cout << w << height[i] << " ";
  }
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