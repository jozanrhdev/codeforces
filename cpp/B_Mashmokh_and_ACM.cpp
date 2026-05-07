#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int main() {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> dp(k + 1, vector<int>(n + 1, 0));

    // Inicializar para longitud 1:
    for (int num = 1; num <= n; ++num)
        dp[1][num] = 1;

    // DP optimizada:
    for (int len = 2; len <= k; ++len) {
        for (int prev = 1; prev <= n; ++prev) {
            int add = dp[len - 1][prev];
            for (int num = prev; num <= n; num += prev) {
                dp[len][num] = (dp[len][num] + add) % MOD;
            }
        }
    }

    int res = 0;
    for (int num = 1; num <= n; ++num)
        res = (res + dp[k][num]) % MOD;
    cout << res << '\n';
}
