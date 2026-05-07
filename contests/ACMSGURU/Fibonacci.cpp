#include <bits/stdc++.h>

using namespace std;

int main() {
	int k, sum = 0, a = 1, b = 0, c = 0;
	cin >> k;
	for(int i = 0; i < k; ++i) {
		sum += a;
		b = a;
		a = b + c;
		c = b;
	}
	cout << sum << endl;
	return 0;
}
