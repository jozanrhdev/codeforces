#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef long long ll;

ll n, m;

void solve(ll cas[]) {
    ll cont = 0;
    ll c = 1;
    for(ll i = 0; i < m; ++i) {
        cont += abs(cas[i] - c);
        c = cas[i];
        if(cas[i+1] < cas[i] && i+1 < m) {
            cont += abs(n - c);
            c = 0;
        }
    }
    cout << cont << endl;
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    cin >> n >> m;
    ll cas[m];
    for(ll i = 0; i < m; ++i)
        cin >> cas[i];
    solve(cas);
    return 0;
}
