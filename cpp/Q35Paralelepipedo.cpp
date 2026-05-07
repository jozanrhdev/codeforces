#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef long long ll;

ll a, b, c;

void solve() {
    ll l1 = sqrt((a*b)/c);
    ll l2 = sqrt((a*c)/b);
    ll l3 = sqrt((b*c)/a);
    cout << (l1 + l2 + l3)*4 << endl;
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    cin >> a >> b >> c;
    solve();
    return 0;
}
