#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef unsigned long long ll;

int t;

void solve(vector<int> nums, vector<int> cons) {
    ll V = 0, P = 0;
    ll n = nums.size();
    for(int i = 0; i < (int)cons.size(); ++i) {
        auto it = find(nums.begin(), nums.end(), cons[i]);
        int index = distance(nums.begin(), it);
        V += (index + 1);
        P += (n - (index));
    }
    cout << V << " " << P << endl;
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i)
        cin >> nums[i];
    cin >> t;
    vector<int> cons(t);
    for(int i = 0; i < t; ++i)
        cin >> cons[i];
    solve(nums, cons);
    return 0;
}
