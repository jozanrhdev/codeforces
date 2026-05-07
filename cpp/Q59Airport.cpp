#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef unsigned long long ll;

int n, m;

void solve() {
    int dp[1000];
    for (int i = 0; i < m; ++i) 
        cin >> dp[i];
    sort(dp, dp + m);
    int dw(0), num(dp[0]), k(0);
    for (int i = 0; i < n; ++i) {
        dw += num;
        num--;
        if (num == 0) 
            num = dp[++k];
    }
    sort(dp, dp + m, greater<int>());// greater<int> ordena en orden inverso. xd :3
    for(int i = 0; i < m; ++i)
        cout << dp[i] << " ";
    int up(0);
    while (n--) {
        up += dp[0];
        dp[0]--;
        for (int i = 1; i < m; ++i) {
            if (dp[i] <= dp[i-1])
                break;
            swap(dp[i], dp[i-1]);
        }
    }
    cout << up << " " << dw << endl;
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    cin >> n >> m;
    solve();
    return 0;
}
