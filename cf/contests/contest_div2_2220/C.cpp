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
    ll p, q;
    cin >> p >> q;

    ll total_segments = p + 2 * q;


    for (ll n = 1; n * n <= total_segments; ++n) {
        ll numerator = total_segments - n;
        ll denominator = 2 * n + 1;

        if (numerator > 0 && numerator % denominator == 0) {
            ll m = numerator / denominator;
       
            ll horiz = n * (m + 1);
            ll vert = m * (n + 1);
            
            if (q <= horiz && q <= vert) {
                cout << n << " " << m << endl;
                return;
            }
        }
    }

    cout << -1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}