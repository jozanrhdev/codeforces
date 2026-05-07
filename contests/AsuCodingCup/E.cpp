#include <bits/stdc++.h>

#define db double
#define ll long long

using namespace std;

int n, x;

void solve(vector<int> ar) {
    vector<int> ans;
	for(int i = 0; i < x; ++i) {
        int sum = 0, cont = 0;
        for(int j = i; j < x; ++j) {
            sum += ar[j];
            cont++;
            if(sum >= n) {
                ans.push_back(cont);
                break;
            }
        }
    }
    if(ans.size() > 0) {
        sort(ans.begin(), ans.end());
        cout << ans[0] << endl;
    }else {
        cout << -1 << endl;
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> x >> n;
    vector<int> ar(x);
    for(int i = 0; i < (int)ar.size(); ++i)
        cin >> ar[i];
    solve(ar);
	return 0;
}
