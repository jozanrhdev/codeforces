#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef unsigned long long ll;

int n;

void solve(vector<int> sol) {
    int min = 1000;
    int index1;
    int index2;
    if(abs(sol[0] - sol[sol.size()-1] < min)) {
        index1 = 1;
        index2 = sol.size();
        min = abs(sol[0] - sol[sol.size()-1]);
    }
    for(int i = 0; i < (int)sol.size(); ++i) {
        if(abs(sol[i] - sol[i+1]) < min) {
            index1 = i + 1;
            index2 = i + 2;
            min = abs(sol[i] - sol[i+1]);
        }
    }
    cout << index1 << " " << index2 << endl;
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    cin >> n;
    vector<int> sold(n);
    for(int i = 0; i < n; ++i)
        cin >> sold[i];
    solve(sold);
    return 0;
}
