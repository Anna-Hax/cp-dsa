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
    ll a, b, x;
    cin >> a >> b >> x;
    
    vector<ll> anc_a;
    ll curr_a = a;
    anc_a.push_back(curr_a);
    while (curr_a > 0) {
        curr_a = curr_a/x;
        anc_a.push_back(curr_a);
    }
    
    vector<ll> anc_b;
    ll curr_b = b;
    anc_b.push_back(curr_b);
    while (curr_b > 0) {
        curr_b = curr_b/x;
        anc_b.push_back(curr_b);
    }
    
    ll min_ops = -1;
    
    for (ll i = 0; i < anc_a.size(); i++) {
        for (ll j = 0; j < anc_b.size(); j++) {
            ll cost = i + j + abs(anc_a[i] - anc_b[j]);
            if (min_ops == -1 || cost < min_ops) {
                min_ops = cost;
            }
        }
    }
    
    cout << min_ops << "\n";
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