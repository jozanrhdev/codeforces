#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef long long ll;

const int mxN = 2e5;
ll n;

void solve() {
    ll dp[mxN];
    for(int i = 0; i < n; ++i)
        cin >> dp[i];
    sort(dp, dp + n);
    ll dpr = dp[n-1] - dp[0];
    if(dpr == 0) {
        cout << dpr << " " << n * (n - 1) / 2 << "\n";
        return;
    }
    ll cup = 0, cdw = 0;
    for(int i = 0; i < n; ++i) {
        if(dp[i] == dp[0])
            cdw++;
        else
            break;
    }
    for(int i = n - 1; i >= 0; --i) {
        if(dp[i] == dp[n-1])
            cup++;
        else
            break;
    }
    cout << dpr << " " << cup * cdw << "\n";
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    cin >> n;
    solve();
    return 0;
}
