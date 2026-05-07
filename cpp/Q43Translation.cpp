#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef unsigned long long ll;

string s, comp;

void solve() {
    string temp = "";
    for(int i = (int)s.size()-1; i >= 0 ; --i)
        temp += s[i];
    cout << ((temp == comp)?"YES":"NO") << endl;
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    cin >> s >> comp;
    solve();
    return 0;
}
