#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array
#define pb push_back
#define pop pop_back
#define endl "\n"
#define FOR(n) for(int i = 0; i < n; ++i)
#define EACH(v) for(auto i: v)

using namespace std;

const int mxN = 1e5-1;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> dp(mxN);
    FOR(n)
        cin >> dp[i];
    vector<int> a, b, c;
    EACH(dp) {
        if(i == 1)
            a.pb(i);
        if(i == 2 || i == 3)
            b.pb(i);
        if(i == 4 || i == 6)
            c.pb(i);
    }
    if(a.size() != n / 3 || b.size() != n / 3 || c.size() != n / 3) {
        cout << -1 << endl;
        return 0;
    }
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    vector<vector<int>> res;
    for(int i = 1; i <= n/3; ++i) {
        int na = a[i-1];
        int nb = b[i-1];
        int nc = c[i-1];
        if(nc % nb > 0) {
                cout << -1 << endl;
                return 0;
        }
        res.pb({na, nb, nc});
    }
    for(int i = 0; i < (int)res.size(); ++i) {
        for(int j = 0; j < 3; ++j)
            cout << res[i][j] << " ";
        cout << endl;
    }
    return 0;
}
