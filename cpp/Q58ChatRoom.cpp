#include <bits/stdc++.h>

#define db double
#define ar array

using namespace std;

typedef unsigned long long ll;

string s;

void solve() {
    int j = 0, c = 0;
    string comp = "hello";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == comp[j]) {
            j++;
            c++;
            if (c == 5)
                break;
        }
    }
    cout << ((c == 5)?"YES":"NO") << endl;
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    cin >> s;
    solve();
    return 0;
}
