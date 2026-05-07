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
//#define FORM(map, it) for(it = map.begin(); it != map.end(); ++it)

using namespace std;

const int mxN = 1e5;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<ll, ll>> lr;
    FOR(n) {
        lin(l) 
        lin(r);
        lr.pb({l, r});
    }
    vector<pair<ll, ll>> cop(lr);
    sort(cop.begin(), cop.end());
    ll b = cop[0].first;
    ll e = 0;
    int ans = 0;
    FOR(n) {
        if(lr[i].second > e && lr[i].first == b) {
            e = lr[i].second;
            ans = i + 1;
        }
    }
    FOR(n) {
        if(lr[i].second > e) {
            ans = -1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
