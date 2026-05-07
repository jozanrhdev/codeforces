#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef unsigned long long ll;

int n;

void solve() {
    string sc[n];
    string s1 = "", s2 = "";
    for(int i = 0; i < n; ++i) {
        cin >> sc[i];
        if(i - 1 >= 0) {
            if(sc[i] != sc[i-1]) {
                s1 = sc[i];
                s2 = sc[i-1];
            }
        }
    }
    if(s1 == "") {
        cout << sc[0] << endl;
    }else {
        int cont1 = 0, cont2 = 0; 
        for(int i = 0; i < n; ++i) {
            if(sc[i] == s1)
                cont1++;
            else if(sc[i] == s2)
                cont2++;
        }
        cout << ((cont1 < cont2)?s2:s1) << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    cin >> n;
    solve();
    return 0;
}
