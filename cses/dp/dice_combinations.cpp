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
 
int algo(int n){
    vi dp(n + 1, 0);

    dp[0] = 1;

    for (int sum = 1; sum <= n; sum++) {
        for (int roll = 1; roll <= 6; roll++) {
            if (roll <= sum) {
                dp[sum] = (dp[sum] + dp[sum - roll]) % INF;
            }
        }
    }

    return dp[n];

}
 
 
int main() {
    cin.tie(0);
    int n;
    cin >> n;
 
    cout << algo(n) << endl;
 
    return 0;
}