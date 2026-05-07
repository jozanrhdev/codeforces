#include <bits/stdc++.h>

#define db               double
#define ll               long long
#define ld               long double
#define ar               array
#define pb               push_back
#define pop              pop_back
#define mkp              make_pair
#define unmap            unordered_map
#define F                first
#define S                second
#define B                begin()
#define E                end()

#define MOD              (const int) 1e9+7
#define PI               acos(-1.0)
#define inf              (1 << 61)
#define z                (const int) 1e6+5
#define yes              cout << "YES\n"
#define no               cout << "NO\n"
#define Case(i)          cout << "Case " << int(i) << ": "
#define endl             "\n"

#define lin(x)           ll x; cin >> x;
#define nin(x)           int x; cin >> x;
#define sin(x)           string x; cin >> x;
#define scan(a)          scanf("%d", &a)
#define scanl(a)         scanf("%lld", &a)
#define scand(a)         scanf("%lf", &a)
#define scan2(a, b)      scanf("%d %d", &a, &b)
#define scanl2(a, b)     scanf("%lld %lld", &a, &b)
#define scand2(a, b)     scanf("%lf %lf", &a, &b)

#define vin              vector<int>
#define vll              vector<ll>
#define vst              vector<string>
#define pll              pair<ll, ll>
#define pss              pair<string, string>
#define vpll             vector<pll>

#define FOR(i, n)        for(int i = 0; i < n; ++i)
#define IOR(i, n)        for(int i = n-1; i >= 0; --i)
#define EACH(v)          for(auto i: v)
#define FORS(i, j, k, step)  for (int i = j; i < k; i+=step)
#define FORR(i, j, k, step)  for (int i = j; i >= k; i-=step)
#define FMAP(map, it)        for(it = map.begin(); it != map.end(); ++it)

#define all(x)           x.begin(), x.end()
#define sortN(x)         sort(x.begin(), x.end())
#define sortI(x)         sort(x.rbegin(), x.rend())
#define mem0(a)          memset(a, 0, sizeof(a))
#define mem1(a)          memset(a, -1, sizeof(a))
#define fread            freopen("input.txt", "r", stdin)
#define fwrite           freopen("output.txt", "w", stdout)
#define FASTIO           ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

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

const int mxN = 1e5;
int n, num, type, l, r;
vin dp, up;
ll sumdp[mxN], sumup[mxN];

void solve() {
    cin >> type >> l >> r;
    l--;
    r--;
    if(type == 2) {
        if(l > 0)
            cout << sumup[r] - sumup[l-1] << endl;
        else
            cout << sumup[r] << endl;
    }else {
        if(l > 0)
            cout << sumdp[r] - sumdp[l-1] << endl;
        else
            cout << sumdp[r] << endl;
    }
}

int main() {
    FASTIO;
    cin >> n;
    FOR(i, n) {
        cin >> num;
        dp.pb(num);
        up.pb(num);
    }
    sort(all(up));
    sumdp[0] = dp[0];
    sumup[0] = up[0];
    FORS(i, 1, n, 1) {
        sumdp[i] = sumdp[i-1] + dp[i];
        sumup[i] = sumup[i-1] + up[i];
    }
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}