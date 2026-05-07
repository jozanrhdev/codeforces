#include <bits/stdc++.h>

#define db double
#define ld long double
#define ll long long 
#define ar array
#define unmap unordered_map
#define mkp make_pair
#define pb push_back
#define pop pop_back
#define F first
#define S second
#define B begin
#define E end
#define lin(x) ll x; cin >> x;
#define endl "\n"
#define mod 1e9 + 7
#define FOR(n) for(int i = 0; i < n; ++i)
#define FORL(s, e) for(int i = s; i < e; ++i)
#define FORM(s, e) for(int i = s; i <= e; ++i)
#define EACH(v) for(auto i: v)
#define FORS(i, j, k, step) for (int i=j; i<k; i+=step)
#define RFORS(i, j, k, step) for (int i=j; i>=k; i-=step)
#define FMAP(map, it) for(it = map.begin(); it != map.end(); ++it)
#define FIO ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL) 

using namespace std;

void printv(vector<ll> v) {
    ll sz = v.size();
    for(ll i = 0; i < sz; ++i) {
        if (i == sz - 1)
            cout << v[i] << "\n";
        else
            cout << v[i] << " ";
    }
}

bool isPrime(int n) {
    for(int i = 2; i*i <= n; ++i)
        if(n % i == 0)
            return false;
    if(n == 1)
        return false; 
    return true;
}

void READV(vector<int>& v, int n){
    int tmp;
    FOR(n) {
        cin >> tmp;
        v.pb(tmp);
    }
}

bool cmp(pair<int, int> a, pair<int, int> b) {
    if(a.F == b.F)
        return a.S < b.S;
    else
        return a.F > b.F;
}
 
int main() {
    FIO;
    int n, k, ans = 1;
    cin >> n >> k;
    vector<pair<int, int>> up(n);
    FOR(n) 
        cin >> up[i].F >> up[i].S;
    sort(up.begin(), up.end(), cmp);
    k--;
    for(int i = k-1; i >= 0; --i) 
        if(up[i] == up[k]) 
            ans++;
    for(int i = k+1; i < n; ++i)
        if(up[i] == up[k]) 
            ans++;
    cout << ans << endl;
    return 0;
}
