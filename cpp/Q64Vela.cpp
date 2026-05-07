#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef long long ll;

const int mxN = 1e5;
int t;
ll ans = 0;
ll sx, sy, ex, ey;
char a[mxN];

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    cin >> t >> sx >> sy >> ex >> ey;
    for(int i = 0; i < t; ++i) {
        cin >> a[i];
        int res;
        if(a[i] == 'E') {
            res = sx + 1;
            if(abs(res - ex) < abs(sx - ex))
                sx++;
            ans++;
        }else if(a[i] == 'S') {
            res = sy - 1;
            if(abs(res - ey) < abs(sy - ey))
                sy--;
            ans++;
        }else if(a[i] == 'W') {
            res = sx - 1;
            if(abs(res - ex) < abs(sx - ex))
                sx--;
            ans++;
        }else {
            res = sy + 1;
            if(abs(res - ey) < abs(sy - ey))
                sy++;
            ans++;
        }
        if(sx == ex && sy == ey)
            break;
        if(ans == t && (sx != ex || sy != ey))
            ans = -1;
    }
    cout << ans << "\n";
    return 0;
}
