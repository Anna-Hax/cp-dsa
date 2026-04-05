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


void solve() {
    vector<ll> a(7);
    ll total_sum = 0;
    ll max_val = -100; 

    for (int i = 0; i < 7; ++i) {
        cin >> a[i];
        total_sum += a[i];
        if (a[i] > max_val) {
            max_val = a[i];
        }
    }

    ll result = 2 * max_val - total_sum;
    cout << result << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}