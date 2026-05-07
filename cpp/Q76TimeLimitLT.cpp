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

const int mxN = 1e2;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    int np[mxN], mp[mxN];
    cin >> n >> m;
    FOR(n)
        cin >> np[i];
    FOR(m)
        cin >> mp[i];
    sort(np, np + n);
    sort(mp, mp + m);
    if(n == 1) {
        if(mp[0] <= 2 * np[0])
            cout << -1 << endl;
        else
            cout << 2 * np[0];
    }else {
        int var;
        if(2 * np[0] > np[n-1])
            var = 2 * np[0];
        else
            var = np[n-1];
        if(mp[0] > var)
            cout << var << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
