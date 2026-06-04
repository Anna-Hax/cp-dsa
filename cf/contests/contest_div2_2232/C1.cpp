// By Auchenai01
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
const ll MOD = 998244353;
const ll MAXX = 1e16;
const int INF = 1e9 + 7;
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

void solve() {
    int n, x, s;
    cin >> n >> x >> s;
    string str;
    cin >> str;


    vector<int> dp(x + 1, -1);
    
    dp[x] = 0; 

    for (int i = 0; i < n; ++i) {
        char c = str[i];
       
        vector<int> next_dp = dp;

        for (int j = 0; j <= x; ++j) {
            if (dp[j] == -1) continue; 

            int seated = dp[j];
            
            ll partial_seats = 1LL * (x - j) * s - seated;

            if (c == 'I') {
                if (j > 0) {
                    next_dp[j - 1] = max(next_dp[j - 1], seated + 1);
                }
            } 
            else if (c == 'E') {
                if (partial_seats > 0) {
                    next_dp[j] = max(next_dp[j], seated + 1);
                }
            } 
            else if (c == 'A') {
                if (j > 0) {
                    next_dp[j - 1] = max(next_dp[j - 1], seated + 1);
                }
                if (partial_seats > 0) {
                    next_dp[j] = max(next_dp[j], seated + 1);
                }
            }
        }
        dp = next_dp;
    }

    int max_seated = 0;
    for (int j = 0; j <= x; ++j) {
        max_seated = max(max_seated, dp[j]);
    }
    
    cout << max_seated << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}