#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;
    int m = 2 * n;
    vector<int> c(m);
    for (int i = 0; i < m; i++) cin >> c[i];

    vector<vector<int>> blocks;
    int cur_max = -1;
    for (int i = 0; i < m; i++) {
        if (c[i] > cur_max) {
            blocks.push_back({c[i]});
            cur_max = c[i];
        } else {
            blocks.back().push_back(c[i]);
        }
    }

    int num_blocks = blocks.size();
    vector<bitset<2005>> dp(num_blocks + 1);
    dp[0][0] = 1;

    for (int i = 0; i < num_blocks; i++) {
        dp[i+1] = dp[i] | (dp[i] << blocks[i].size());
    }

    if (!dp[num_blocks][n]) {
        cout << -1 << endl;
        return 0;
    }

    vector<bool> is_in_A(num_blocks, false);
    int target = n;
    for (int i = num_blocks - 1; i >= 0; i--) {
        int sz = blocks[i].size();
        if (target >= sz && dp[i][target - sz]) {
            is_in_A[i] = true;
            target -= sz;
        }
    }

    vector<int> A, B;
    for (int i = 0; i < num_blocks; i++) {
        if (is_in_A[i]) {
            for (int val : blocks[i]) A.push_back(val);
        } else {
            for (int val : blocks[i]) B.push_back(val);
        }
    }
    
    for (int i = 0; i < n; i++) cout << B[i] << (i == n - 1 ? "" : " ");
    cout << endl;
    for (int i = 0; i < n; i++) cout << A[i] << (i == n - 1 ? "" : " ");
    cout << "\n";

    return 0;
}