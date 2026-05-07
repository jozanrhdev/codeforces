#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef unsigned long long ll;

int n, m;

void solve() {
    int ans = 0;
    if(m == 1 && n == 1) {
        cout << 2 << endl;
        return;
    }
    for(int b = 0; b < max(m, n); ++b)
        if(b == sqrt(m-sqrt(n-b)))
            ans++;
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    cin >> n >> m;
    solve();
    return 0;
}
