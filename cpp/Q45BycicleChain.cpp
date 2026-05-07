#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef unsigned long long ll;

int n, m;

void solve() {
    int ans = 0;
    vector<int> dp(n);
    for(int i = 0; i < n; ++i)
        cin >> dp[i];
    cin >> m;
    vector<int> up(m);
    vector<int>::iterator it;
    for(int i = 0; i < m; ++i)
        cin >> up[i];
    int c = 0;
    int free = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            int res = up[j] % dp[i];
            if(res == 0 && up[j] / dp[i] >= free) {
                if(free < (up[j] / dp[i])) {
                    free = up[j] / dp[i];
                    ans = 0;
                }
                ans++;
            }
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    cin >> n;
    solve();
    return 0;
}
