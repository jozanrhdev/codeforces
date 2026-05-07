#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef unsigned long long ll;

string s;

void solve() {
    string ans = "";
    string temp = "";
    int n = s.size();
    for(int i = 0; i < n; ++i) {
        temp += s[i];
        //cout << temp << endl;
        if(temp == "1111111" || temp == "0000000") {
            ans = "YES";
            break;
        }
        if(temp[temp.size()-1] != s[i+1])
            temp = "";
    }
    cout << ((ans == "")?"NO":ans) << endl;
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    cin >> s;
    solve();
    return 0;
}
