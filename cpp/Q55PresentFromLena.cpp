#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef unsigned long long ll;

int n;

void solve() {
    for (int up = -n; up <= n; ++up) {
        int top = n - abs(up);
        for (int i = 0; i < abs(up); ++i)
            cout << "  ";
        for (int i = 0; i < top; ++i)
            cout << i << " ";
        for (int i = top; i > 0; --i)
            cout << i << " ";
        cout << 0 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    cin >> n;
    solve();
    return 0;
}
