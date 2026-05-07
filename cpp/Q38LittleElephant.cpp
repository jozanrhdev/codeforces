#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef unsigned long long ll;

int n;

void solve(vector<ll> c) {
    ll mn = *min_element(c.begin(), c.end());
    vector<ll>::iterator it;
    auto ind = find(c.begin(), c.end(), mn);
    int index = distance(c.begin(), ind);
    int cont = 0;
    for(int i = 0; i < (int)c.size(); ++i) {
        if(mn == c[i])
            cont++;
    }
    if(cont > 1)
        cout << "Still Rozdil" << endl;
    else
        cout << index + 1 << endl;
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    cin >> n;
    vector<ll> c(n);
    for(int i = 0; i < n; ++i)
        cin >> c[i];
    solve(c);
    return 0;
}
