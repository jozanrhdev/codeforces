#include <bits/stdc++.h>

#define ll unsigned long long

using namespace std;

int main() {
	ll A, B, ans = 0;
	cin >> A >> B;
	if(A >= 1 && A <= 100 && B >= 1 && B <= 100)
		ans = pow(A, B) - pow(B, A);	
	cout << ans << endl;
	return 0;
}
