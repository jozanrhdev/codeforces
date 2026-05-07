#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
const int maxn=1000005;

int t, n, k, M[maxn], B[maxn], cnt1[maxn], cnt2[maxn], ans1=0, ans2=0;

void solve() {
    for(int i = 1; i <= n; ++i) {
        cin >> M[i];
        if(M[i] > k)
            continue;
        else {
            cnt1[M[i]]++;
            ans1 += cnt1[k-M[i]];
        }
    }
    for(int i = 1; i <= n; ++i) {
        cin >> B[i];
            if(B[i] > k)
                continue;
            else {
                cnt2[B[i]]++;
                ans2 += cnt2[k-B[i]];
            }
    }
    cout << ((ans1 > ans2)?"Mahmoud":(ans1 < ans2)?"Bashar":"Draw") << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

    cin >> n >> k;
    solve();
}
