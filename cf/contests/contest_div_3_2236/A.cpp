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
    
    ll min_h = 1e9; 
    ll max_h = -1e9;
    
    for (ll i = 0; i < n; ++i) {
        ll h;
        cin >> h;
        if (h < min_h){
            min_h = h;
        } 
        if (h > max_h) {
            max_h = h;
        }
    }
    
    cout << max_h - min_h + 1 << "\n";
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