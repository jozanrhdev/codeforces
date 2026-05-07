#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef unsigned long long ll;

string s;

void solve() {
    string ans = "";
    int n = s.size();
    for(int i = 0; i < n; ++i) {
        if(isupper(s[i]))
            s[i] = tolower(s[i]);
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y') {
            ans += ".";
            ans += s[i];
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    cin >> s;
    solve();
    return 0;
}
