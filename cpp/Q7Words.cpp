#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    string s;
    cin >> s;
    int n1 = 0, n2 = 0;
    for(char ch: s) {
        if(ch >= 'a' && ch <= 'z')
            n1++;
        else
            n2++;
    }
    if(n1 < n2) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s << endl;
    }else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
    }
    return 0;
}
