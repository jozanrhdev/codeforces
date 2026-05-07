#include <bits/stdc++.h>
 
#define db double
#define ll long long
#define ar array
 
using namespace std;
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
    string str;
    cin >> str;
    int n = str.size();
    map<char, int> up;
    for(auto i: str)
        up[i]++;
    int a = 0;
    for(auto i: up)
        if(i.second % 2 == 0)
            a += i.second;
    if(n % 2) {
        if(n - a % 2)
            cout << "First" << "\n";
        else
            cout << "Second" << "\n";
    }else {
        if(a == n)
            cout << "First" << "\n";
        else
            cout << "Second" << "\n";
    }
	return 0;
}
