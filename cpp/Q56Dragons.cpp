#include <bits/stdc++.h>
#include <map>

using namespace std;

#define mem(array,num) memset(array,num,sizeof(array))

int s, n;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);

    long int c;
    pair<int, int> a[1000];
    cin >> s >> n;
    c = 1;
    for(int i = 0; i < n; ++i)
        cin >> a[i].first >> a[i].second;
    sort(a, a+n);
    for(int i = 0; i < n; ++i)
        cout << a[i].first << " = " << a[i].second << endl; 
    for(int i = 0; i < n; ++i) {
        if(s <= a[i].first) {
            c = 0;
            break;
        }else
            s += a[i].second;
    }
    if(c == 0)
        cout << "NO\n";
    else
        cout << "YES\n";
    return 0;
}
