#include <bits/stdc++.h>

#define db double
#define ld long double
#define ll long long 
#define ar array
#define unmap unordered_map
#define mp make_pair
#define pb push_back
#define pop pop_back
#define F first
#define S second
#define B begin
#define E end
#define lin(x) ll x; cin >> x;
#define endl "\n"
#define mod 1e9 + 7
#define stv(v) sort(v.begin(),v.end())
#define FOR(n) for(int i = 0; i < n; ++i)
#define FORL(s, e) for(int i = s; i < e; ++i)
#define FORM(s, e) for(int i = s; i <= e; ++i)
#define EACH(v) for(auto i: v)
#define FORE(i, a, b)for(int i = a; a < b?i < b:i > b; a < b?++i:--i)
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

const int mxN = 6e5;
const double PI = 3.141592653589793238;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    int n;
    cin >> n;
    n *= 2;
    unmap<int, vector<int>> ump; 
    FOR(n) {
        int quid;
        cin >> quid;
        ump[quid].pb(i+1);
    }
    bool ok = 0;
    vector<pair<int, int>> vpa;
    EACH(ump) {
        vector<int> tmp = i.S;
        int l = tmp.size();
        if(l % 2) {
            ok = 1;
            break;
        }else
            FORS(j, 0, l, 2)
                vpa.pb(mp(tmp[j], tmp[j+1]));
    }
    if(ok)
        cout << -1 << endl;
    else
        EACH(vpa)
            cout << i.F << " " << i.S << endl;
    return 0;
}
    //n *= 2;
    //int dp[mxN];
    //int up[mxN];
    //vector<int> rp;
    //vector<int> ans;
    //FOR(n)
        //cin >> dp[i];
    //FOR(n)
        //up[i] = dp[i];
    //sort(up, up + n);
    //FORS(i, 0, n, 2) {
        //if(up[i] != up[i+1]) {
            //cout << -1 << endl;
            //return 0;
        //}
    //}
    //FOR(n)
        //rp.pb(dp[i]);
    //int j = 0;
    //while(ans.size() != n) {
        //auto it = find(rp.B(), rp.E(), dp[j]);
        //int index = distance(rp.B(), it);
        ////cout << index << " " << dp[j] << endl;
        //if(it == rp.E())
            //j++;
        //else {
            //ans.pb(index+1);
            //rp[index] = -j;
        //}
    //}
    //FORS(i, 0, n, 2)
        //cout << ans[i] << " " << ans[i+1] << endl;
    //return 0;
//}
