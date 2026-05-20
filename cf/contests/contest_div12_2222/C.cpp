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

using namespace std;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> temp(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        temp[i] = a[i];
    }

    sort(temp.begin(), temp.end());
    ll target = temp[n / 2];


    vector<ll> dp(n + 1, -1);
    dp[0] = 0;

    for (ll i = 1; i <= n; i++) {
        ll countGreater = 0;
        ll countLess = 0;
        for (ll j = i - 1; j >= 0; j--) {
            if (a[j] > target) countGreater++;
            else if (a[j] < target) countLess++;

            ll len = i - j;
            if (len % 2 != 0) {
                ll half = len / 2;
                if (countGreater <= half && countLess <= half) {
                    if (dp[j] != -1) {
                        dp[i] = max(dp[i], dp[j] + 1);
                    }
                }
            }
        }
    }

    cout << dp[n] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}