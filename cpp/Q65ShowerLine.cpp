#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef unsigned long long ll;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    ll ans = 0, sum = 0;
    vector<int> gr = {1,2,3,4,5};
    int g[5][5];
    for(int i = 0; i < 5; ++i)
        for(int j = 0; j < 5; ++j)
            cin >> g[i][j];
    do {
        sum = 0;
        sum += (g[gr[0]-1][gr[1]-1] + g[gr[1]-1][gr[0]-1]+g[gr[2]-1][gr[3]-1] + g[gr[3]-1][gr[2]-1]);
        sum += (g[gr[1]-1][gr[2]-1] + g[gr[2]-1][gr[1]-1]+g[gr[3]-1][gr[4]-1] + g[gr[4]-1][gr[3]-1]);
        sum += (g[gr[2]-1][gr[3]-1] + g[gr[3]-1][gr[2]-1]);
        sum += (g[gr[3]-1][gr[4]-1] + g[gr[4]-1][gr[3]-1]);
        ans = max(ans, sum);
    }while(next_permutation(gr.begin(), gr.end()));
    cout << ans << "\n";
    return 0;
}
