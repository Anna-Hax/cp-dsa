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
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll limit_k = n / 2;
    ll cols = n + 2;
    
    
    vector<ll> min_r((limit_k + 2) * cols, 1e9);
    vector<ll> max_l((limit_k + 2) * cols, -1e9);
    
    vector<ll> vis(n + 1, 0);
    
    for (ll l = 0; l < n; l++) {
        ll min_val = 1e9;
        ll max_val = -1e9;
        ll marker = l + 1; 
        
        for (ll r = l; r < n; r++) {
            if (vis[a[r]] == marker) {
                break; 
            }
            vis[a[r]] = marker;
            
            min_val = min(min_val, a[r]);
            max_val = max(max_val, a[r]);
            
            ll k = r - l + 1;
            if (max_val - min_val == k - 1) {
                if (k <= limit_k) {
                    ll idx = k * cols + min_val;
                    min_r[idx] = min(min_r[idx], r);
                    max_l[idx] = max(max_l[idx], l);
                }
            }
        }
    }
    
    ll max_length = 0;
    for (ll k = 1; k <= limit_k; k++) {
        for (ll x = 1; x <= n - k; x++) {
            ll idx1 = k * cols + x;         
            ll idx2 = k * cols + (x + k);   
            
            if (min_r[idx1] < max_l[idx2] || min_r[idx2] < max_l[idx1]) {
                max_length = max(max_length, k);
                break; 
            }
        }
    }
    
    cout << max_length << "\n";
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