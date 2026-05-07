#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    int n, num, sum(0), ans(0);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        sum += num;
    }
    for(int i = 1; i <= 5; ++i)
        if((sum + i) % (n + 1) != 1)
            ans += 1;
    cout << ans << endl;
    return 0;
}