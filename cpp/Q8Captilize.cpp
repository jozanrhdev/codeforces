#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	for(int i = 0; i < T; ++i) {
		string val; 
		getline(cin, val);
		string ans, antes, despues;
        int j;
		for(j = 0; val[j] != '\0'; ++j) {
			if(val[j] != '#' && val[j] != ' ') {
				ans += val[j];
			}
		}
		for(int k = j + ans.size(); val[j] != '\0'; ++k) 
			despues += val[j];
		cout << ans << despues << endl;
	}
	return 0;
}
