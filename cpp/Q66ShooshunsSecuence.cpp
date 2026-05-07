#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array
#define pb push_back
#define pop pop_back
#define endl "\n"
#define FOR(n) for(int i = 0; i < n; ++i)

using namespace std;

const int mxN = 1e5;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k;
    cin >> n >> k;
    int up[mxN];
    FOR(n)
        cin >> up[i];
    k--;
    int ans = -1;
    FOR(n)
        if(up[i] != up[n-1])
            ans = i;
    if(ans >= k)
        cout << -1 << endl;
    else
        cout << ans + 1 << endl;
    return 0;
}
