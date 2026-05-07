#include <bits/stdc++.h>
 
#define db double
#define ll long long
#define ar array
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n, x, a;
    cin >> n >> x >> a;
    int nrest = a - (a % x);
    nrest /= x;
    int ans = 0;
    while(n > 0) {
        n -= nrest;
        ans++;
    }
    if(n > 0) {
        ans++;
        cout << ans << endl;
    }
    else {
        cout << ans << endl;
    }
    return 0;
}
