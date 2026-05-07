#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef unsigned long long ll;

string dub;

string trim(const string& str) {
    size_t first = str.find_first_not_of(' ');
    if (string::npos == first)
        return str;
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}

void solve() {
    string ans = "";
    int n = dub.size();
    string temp = "";
    for(int i = 0; i < n; ++i) {
        temp += dub[i];
        if((int)temp.size() >= 3 || temp != "WUB") {
            if(temp == "WUB") {
                temp = "";
            }else if(dub[i+1] == 'W' && dub[i+2] == 'U' && dub[i+3] == 'B') {
                ans += (temp + " ");
                temp = "";
            }else if(i + 1 == n)
                ans += temp;
        }
    }
    cout << trim(ans) << endl;
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
 
    cin >> dub;
    solve();
    return 0;
}
