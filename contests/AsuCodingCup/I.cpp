#include <bits/stdc++.h>

#define db double
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, a = 0, b = 0, c = 0, d = 0, e = 0;
    vector<int> res;
    cin >> n;
    char ans[n];
    cin >> ans;
    for(char ch: ans) {
        if(ch == 'a')
            a++;
        else if(ch == 'b')
            b++;
        else if(ch == 'c')
            c++;
        else if(ch == 'd')
            d++;
        else
            e++;
    }
    res.push_back(a);
    res.push_back(b);
    res.push_back(c);
    res.push_back(d);
    res.push_back(e);
    sort(res.begin(), res.end());
    cout << res[0] << " " << res[4] << endl; 
    return 0;
}
