#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef unsigned long long ll;

int n, a, b;

void solve() {
    int ans = a + 1;
    int c = 0;
    while(ans + c < n && c < b)
        c++;
    cout << c + 1 << endl;
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    cin >> n >> a >> b;
    solve();
    return 0;
}
