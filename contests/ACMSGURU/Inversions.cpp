#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll inversions(ll arr[], int n) {
    multiset<int> set1; 
    set1.insert(arr[0]); 
    int invcount = 0; // Initialize result 
    multiset<int>::iterator itset1; // Iterator for the set 
    // Traverse all elements starting from second 
    for (int i = 1; i < n; ++i) { 
        // Insert arr[i] in set (Note that set maintains 
        // sorted order) 
        set1.insert(arr[i]); 
        // Set the iterator to first greater element than arr[i] 
        // in set (Note that set stores arr[0],.., arr[i-1] 
        itset1 = set1.upper_bound(arr[i]); 
        // Get distance of first greater element from end 
        // and this distance is count of greater elements 
        // on left side of arr[i] 
        invcount += distance(itset1, set1.end()); 
    }
    return invcount;
}

int main() {
	ll n;
    cin >> n;
    ll ar[n];
    for(int i = 0; i < n; ++i)
        cin >> ar[i];
    ll ans = inversions(ar, n);
	cout << ans << endl;
	return 0;
}
