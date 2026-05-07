#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array
#define pb push_back
#define pop pop_back
#define endl "\n"
#define FOR(n) for(int i = 0; i < n; ++i)
#define unor unordered_map<char, int>
#define EACH(v) for(auto i: v)
#define FORM(map, it) for(it = map.begin(); it != map.end(); ++it)

using namespace std;

const int mxN = 1e5;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string s, c;
    getline(cin, s);
    getline(cin, c);
    unor map1;
    unor map2;
    EACH(s)
        if(i != ' ')
            map1[i]++;
    EACH(c)
        if(i != ' ')
            map2[i]++;
    bool ok = true;
    unor::iterator it;
    for(it = map2.begin(); it != map2.end(); ++it) {
        if(map1.find(it->first) == map1.end()) {
            ok = false;
            break;
        }else {
            if(map1[it->first] < it->second) {
                ok = false;
                break;
            }
        }
    }
    if(ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
