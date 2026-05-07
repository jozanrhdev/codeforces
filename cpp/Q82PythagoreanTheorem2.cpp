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

const int mxN = 1e5;
const double PI = 3.141592653589793238;

void solve() {
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, ans = 0;
    cin >> n;
    for(int i = 1; i <= n-1; ++i) {
        for(int j = i; j <= n; ++j) {
            db k = sqrt(pow(i, 2) + pow(j, 2));
            int temp = sqrt(pow(i, 2) + pow(j, 2));
            if(k <= n && temp == k)
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
