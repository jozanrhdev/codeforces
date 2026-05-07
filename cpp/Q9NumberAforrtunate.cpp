#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    ll s;
    cin >> s;
    string num = to_string(s);
    ll cont = 0;
    for(ll i = 0; i < (ll)num.size(); ++i)
        if(num[i] == '4' || num[i] == '7')
            cont++;
    string ans = to_string(cont);
    for(ll i = 0; i < (ll)ans.size(); ++i) {
        if(ans[i] != '7' && ans[i] != '4') {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
