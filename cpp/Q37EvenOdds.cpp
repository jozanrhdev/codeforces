#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef unsigned long long ll;

ll n, pos;

void solve() {
    ll ans = 0;
	if(n % 2 != 0) {		
        if(pos > ceil((db)n/2.0)+1)
            ans = 2 * (pos-ceil((db)n/2.0));
        else
            ans = 2 * pos - 1;
	}else {
        if(pos > n/2) {
            ans = 2 * (pos-ceil((db)n/2.0));
        }else
            ans = 2 * pos - 1;
	}
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    cin >> n >> pos;
    solve();
    return 0;
}
