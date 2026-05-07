#include <bits/stdc++.h>

#define db double
#define ld long double
#define ll long long 
#define ar array
#define unmap unordered_map
#define pb push_back
#define pop pop_back
#define lin(x) ll x; cin >> x;
#define endl "\n"
#define FOR(n) for(int i = 0; i < n; ++i)
#define FORL(s, e) for(int i = s; i < e; ++i)
#define FORM(s, e) for(int i = s; i <= e; ++i)
#define EACH(v) for(auto i: v)
#define FORE(i, a, b)for(int i = a; a < b?i < b:i > b; a < b?i++:i--)
#define FMAP(map, it) for(it = map.begin(); it != map.end(); ++it)

using namespace std;

const int mxN = 3e5/2;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k, index = 0;
    ll sum = 0;
    cin >> n >> k;
    int dp[mxN];
    FOR(n)
        cin >> dp[i];
    FOR(k)
        sum += dp[i];
    ll ans = sum;
    FORE(i, k, n) {
        sum += (dp[i] - dp[i-k]);
        if(ans > sum) {
            ans = sum;
            index = i - k + 1;
        }
    }
    cout << index + 1 << endl;
    return 0;
}
