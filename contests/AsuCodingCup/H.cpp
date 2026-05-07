#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
const int mod=1e9+7;

int t, n, a[100005], mi = 100005, mx = -1;
ll f[100005], ans = 0, cnt[100005];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

    cin >> n;
    for(int i = 1; i <= n; ++i) {
        scanf("%lld", &a[i]);
        cnt[a[i]]++;
        mi = min(mi,a[i]);
        mx = max(mx,a[i]);
    }
    f[1]=1;
    for(int i = 2; i <= 100000; ++i) {
        f[i] = ((f[i-1] + 1) * 2 - 1) % mod;
    }
    for(int i = mi;i <= mx; ++i) {
        if(cnt[i]){
            ans = (ans + f[cnt[i]]) % mod;
        }
    }
    cout << ans << endl;
    return 0;
}
