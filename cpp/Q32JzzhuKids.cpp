#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef unsigned long long ll;

int n, c;

void solve(vector<int> cand) {
    vector<int> pos(n);
    for(int i = 1; i <= n; ++i)
        pos[i-1] = i;
    if(cand.size() == 1) {
        cout << 1 << endl;
        return;
    }
    int i = 0;
    int ans;
    while(true) {
        if(cand[i] - c <= 0) {
            pos.erase(pos.begin() + i);
            cand.erase(cand.begin() + i);
            --i;
        }else {
            int num = cand[i] - c;
            cand.erase(cand.begin() + i);
            cand.push_back(num);
            pos.push_back(pos[i]);
            pos.erase(pos.begin() + i);
            --i;
        }
        if(pos.size() == 1) {
            ans = pos[0];
            break;
        }
        ++i;
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    cin >> n >> c;
    vector<int> candies(n);
    for(int i = 0; i < n; ++i)
        cin >> candies[i];
    solve(candies);
    return 0;
}
