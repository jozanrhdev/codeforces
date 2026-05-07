#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef unsigned long long ll;

int n, m;

void solve() {
    vector<int> dp(n);
    int sum = 0;
    for(int i = 0; i < n; ++i)
        cin >> dp[i];
    sort(dp.begin(), dp.end());
    int i = 0;
    while(i < m && dp[i] < 0) {
        if(dp[i] < 0)
            sum += abs(dp[i]);
        ++i;
    }
    cout << sum << endl;
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    cin >> n >> m;
    solve();
    return 0;
}
