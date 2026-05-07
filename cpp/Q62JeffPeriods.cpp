#include<bits/stdc++.h>
#include<set>

using namespace std;

int n, a, prepos[100005], pos[100005], divs[100005], res;
bool arith[100005];
set<int> num;

int main(){
    memset(arith ,1 ,sizeof arith);
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a;
        pos[a] = i;
        if(arith[a] && (divs[a] == 0 || pos[a]-prepos[a] == divs[a])){
            num.insert(a);
            if(prepos[a] != 0)
                divs[a] = pos[a]-prepos[a];
            prepos[a] = pos[a];
        }
        else if(arith[a]){
            arith[a]=0;
            res--;
        }
    }
    res += num.size();
    cout << res << "\n";
    set<int>::iterator it;
    for(it = num.begin(); it != num.end(); ++it){
        int tmp = *it;
        if(arith[tmp])
            cout << tmp << " " << divs[tmp] << "\n";
    }
    return 0;
}
