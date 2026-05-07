#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef long long ll;

int n, m;
char cr[100][100];
int a[10000][2];

void solve() {
    int k = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> cr[i][j];
            if(cr[i][j] == '.') {
                a[k][0] = i;
                a[k][1] = j;
                ++k;
            }
        }
    }
    for(int i = 0; i < k; ++i) {
        for(int j = 0; j < 2; ++j) {
            if(a[i][0] % 2 == 0 && a[i][1] % 2 == 0)
                cr[a[i][0]][a[i][1]] = 'B';
            else if(a[i][0] % 2 == 0 && a[i][1] % 2 != 0)
                cr[a[i][0]][a[i][1]] = 'W';
            else if(a[i][0] % 2 != 0 && a[i][1] % 2 == 0)
                cr[a[i][0]][a[i][1]] = 'W';
            else
                cr[a[i][0]][a[i][1]] = 'B';
        }
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << cr[i][j];
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    cin >> n >> m;
    solve();
    return 0;
}
