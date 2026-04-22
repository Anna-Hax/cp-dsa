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
const int INF = 1e9;
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;


ll get_cost(char c1, char c2, char target) {
    ll cost = 0;
    if (c1 != target) cost++;
    if (c2 != target) cost++;
    return cost;
}

void solve() {
    ll n;
    cin >> n;
    string row1, row2;
    cin >> row1 >> row2;

    
    vector<ll> dp(n + 1, INF);
    dp[0] = 0;

    for (ll i = 1; i <= n; ++i) {

        ll cost_red = (row1[i-1] != 'R') + (row2[i-1] != 'R');
        ll cost_black = (row1[i-1] != 'B') + (row2[i-1] != 'B');
        dp[i] = min(dp[i], dp[i-1] + min(cost_red, cost_black));

        if (i >= 2) {
            ll top_red = (row1[i-2] != 'R') + (row1[i-1] != 'R');
            ll top_black = (row1[i-2] != 'B') + (row1[i-1] != 'B');
            ll min_top = min(top_red, top_black);

            ll bottom_red = (row2[i-2] != 'R') + (row2[i-1] != 'R');
            ll bottom_black = (row2[i-2] != 'B') + (row2[i-1] != 'B');
            ll min_bottom = min(bottom_red, bottom_black);

            dp[i] = min(dp[i], dp[i-2] + min_top + min_bottom);
        }
    }

    cout << dp[n] << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}