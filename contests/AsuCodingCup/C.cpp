#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array

using namespace std;

int x, y;
string in;

void solve() {
	cin >> in;
    for(int i = 0; i < (int)in.size(); ++i) {
        if(in[i] == 'U')
            y++;
        else if(in[i] == 'D')
            y--;
        else if(in[i] == 'L')
            x--;
        else if(in[i] == 'R')
            x++;
    }
    cout << x << " " << y << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> x >> y;
    solve();
	return 0;
}
