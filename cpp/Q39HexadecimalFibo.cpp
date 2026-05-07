#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef unsigned long long ll;

ll n;

void solve() {
    if(n == 0) {
        cout << 0 << " " << 0 << " " << 0;
        return;
    }
    if(n == 1) {
        cout << 1 << " " << 0 << "  " << 0 << endl;
        return;
    }
    ll a = 0, b = 1, c = 0;
    vector<ll> nums;
    ll cont = 0;
    while(a != n) {
        nums.push_back(a);
        a = b;
        b = a + c;
        c = a;
        cont++;
    }
    cout << 0 << " " << nums[cont-2] << " " << nums[cont-1];
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    cin >> n;
    solve();
    return 0;
}
