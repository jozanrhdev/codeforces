#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef unsigned long long ll;

void solve() {
    int k, cont = 0;
    char ch;
    cin >> k;
    string s;
    cin >> s;
    int n = s.size();
    sort(s.begin(), s.end());
    for(int i = 0; i < n; ++i){
        if(i % k == 0)
            ch = s[i]; 
        if(s[i] == ch)
            cont++;
        //cout << ch << " " << cont << endl;
    }
    if(n == cont && cont % k == 0){
        for(int i = 0; i < k; ++i)
            for(int j = 0; j < n; j+=k)
                cout << s[j];
    }else
        cout << -1;
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);

    solve();
    return 0;
}
