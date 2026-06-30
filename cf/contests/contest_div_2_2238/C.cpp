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
    ll n;
    cin >> n;

    vector<ll> p(n + 1);
    for (ll i = 2; i <= n; ++i) {
        cin >> p[i];
    }

    vector<ll> depth(n + 1, 0);
    for (ll i = 2; i <= n; ++i) {
        depth[i] = depth[p[i]] + 1;
    }

    vector<ll> max_d(n + 1);
    for (ll i = 1; i <= n; ++i) {
        max_d[i] = depth[i];
    }

    vector<ll> m1(n + 1, -1);
    vector<ll> m2(n + 1, -1);

    for (ll i = n; i >= 2; --i) {
        ll parent = p[i];
        ll child_max_depth = max_d[i];

        max_d[parent] = max(max_d[parent], child_max_depth);

        if (child_max_depth > m1[parent]) {
            m2[parent] = m1[parent];
            m1[parent] = child_max_depth;
        } else if (child_max_depth > m2[parent]) {
            m2[parent] = child_max_depth;
        }
    }

    long long total_guilds = 0;

    for (ll i = 1; i <= n; ++i) {
        total_guilds += 1;
        
        if (m2[i] != -1) {
            total_guilds += max((ll) 0, m2[i] - depth[i]);
        }
    }

    cout << total_guilds << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}