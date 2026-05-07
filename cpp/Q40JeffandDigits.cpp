#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef long long ll;

void solve(vector<int> nums) {
    ll cont1 = 0;
    ll cont2 = 0;
    for(ll i = 0; i < (ll)nums.size(); ++i) {
        if(nums[i] == 5)
            cont1++;
        if(nums[i] == 0)
            cont2++;
    }
    if(cont1 < 9 && cont2 != 0) {
        cout << 0 << endl;
        return;
    }
    sort(nums.begin(), nums.end());
    if(cont1 >= 9 && cont2 != 0) {
        string ans = "";
        ll ent = floor((db)cont1/9.0);
        for(ll i = 0; i < ent*9; ++i)
            ans += "5"; 
        for(ll i = 0; i < cont2; ++i)
            ans += "0";
        cout << ans << endl;
    }else
        cout << -1 << endl;
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i)
        cin >> nums[i];
    solve(nums);
    return 0;
}
