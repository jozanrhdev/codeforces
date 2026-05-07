#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef long long ll;

string s;

void solve() {
    string ans = "";
    ll i;
    for(i = 0; i < (ll)s.size(); ++i) {
        if(s[i] != '1') {
            ans = "NO";
            break;
        }else {
            if(i + 1 < (ll)s.size()) {
                if(s[i+1] == '4') {
                    if(i + 2 < (ll)s.size()) {
                        if(s[i+2] == '4')
                            ++i;
                        else if(s[i+2] != '1') {
                            ans = "NO";
                            break;
                        }
                    }
                    ++i;
                }else if(s[i+1] != '1'){
                    ans = "NO";
                    break;
                }
            }
        }
    }
    if(i == (ll)s.size())
        ans = "YES";
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    cin >> s;
    solve();
    return 0;
}
