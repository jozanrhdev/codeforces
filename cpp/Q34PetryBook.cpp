#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef unsigned long long ll;

int pag;

void solve(int d[7]) {
    int i = 0;
    int ans;
    while(pag > 0) {
        if(i == 7)
            i = 0;
        if(pag - d[i] <= 0)
            ans = i+1;
        pag -= d[i];
        ++i;
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    cin >> pag;
    int days[7];
    for(int i = 0; i < 7; ++i)
        cin >> days[i];
    solve(days);
    return 0;
}
