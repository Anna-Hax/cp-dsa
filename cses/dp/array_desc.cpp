#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int algo(int n, int m, vector<int>& arr) {
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int j = 1; j <= m; j++) {
        if (arr[0] == 0 || arr[0] == j) {
            dp[1][j] = 1;
        }
    }

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (arr[i - 1] != 0 && arr[i - 1] != j) {
                dp[i][j] = 0;
                continue;
            }

            long long val = dp[i - 1][j]; 
            if (j > 1) val += dp[i - 1][j - 1]; 
            if (j < m) val += dp[i - 1][j + 1]; 
            
            dp[i][j] = val % MOD;
        }
    }

    int ans = 0;
    for (int j = 1; j <= m; j++) {
        ans = (ans + dp[n][j]) % MOD;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, m;
    if (!(cin >> n >> m)) return 0;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << algo(n, m, arr) << endl;
    return 0;
}