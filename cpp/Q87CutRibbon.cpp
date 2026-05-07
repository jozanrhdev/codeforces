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
#define ene              (const int) 1e6+5
#define yes              cout << "YES\n"
#define no               cout << "NO\n"
#define Case(i)          cout << "Case " << int(i) << ": "
#define endl             "\n"

#define lin(x)           ll x; cin >> x
#define nin(x)           int x; cin >> x
#define sin(x)           string x; cin >> x
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
#define FORS(i, j, k, step)  for (int i=j; i<k; i+=step)
#define FORR(i, j, k, step)  for (int i=j; i>=k; i-=step)
#define FMAP(map, it)        for(it = map.begin(); it != map.end(); ++it)

#define all(x)           x.begin(), x.end()
#define sortN(x)         sort(x.begin(), x.end())
#define sortI(x)         sort(x.rbegin(), x.rend())
#define mem0(a)          memset(a, 0, sizeof(a))
#define mem1(a)          memset(a, -1, sizeof(a))
#define fread            freopen("input.txt", "r", stdin)
#define fwrite           freopen("output.txt", "w", stdout)
#define FIO              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

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
    FOR(i, n) {
        cin >> tmp;
        v.pb(tmp);
    }
}

int main() {
    FIO;
    
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> dp(n+1);
    if(a <= n)
        dp[a] = 1;
    if(b <= n)
        dp[b] = 1;
    if(c <= n)
        dp[c] = 1;
    for(int i = 1; i <= n; ++i)
        for(int j: {a, b, c})
            if(j <= i)
                if(dp[i-j])
                    dp[i] = max(dp[i], dp[i-j]+1);
    cout << dp[n] << endl;
    return 0;
}