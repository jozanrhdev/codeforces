#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef unsigned long long ll;

int n, m;

void solve() {
    int dp[1000];
    for(int i = 0; i < m; ++i)
        cin >> dp[i];
    sort(dp, dp + m);
    int ans = dp[n-1] - dp[0];
    for(int i = 1; i <= m - n; ++i)
        ans = min(ans, dp[i+n-1] - dp[i]);
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);

    cin >> n >> m;
    solve();
    return 0;
}
