#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef unsigned long long ll;

int k;

void solve() {
    vector<int> dp(12);
    int sum = 0;
    int ans = 0;
    for(int i = 0; i < 12; ++i)
        cin >> dp[i];
    sort(dp.begin(), dp.end());
    for(int i = (int)dp.size() - 1; i >= 0; --i) {
        if(sum >= k)
            break;
        sum += dp[i];
        ans++;
    }
    cout << ((sum >= k)?ans:-1) << endl;
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    cin >> k;
    solve();
    return 0;
}
