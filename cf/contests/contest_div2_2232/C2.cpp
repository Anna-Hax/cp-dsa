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
    ll n, x, s;
    cin >> n >> x >> s;
    string u;
    cin >> u;

    ll M = 0;
    
    ll L = 0;
    ll R = 0;

    for (char c : u) {

        ll min_req = (M + s) / s;
        
        bool can_E = (c == 'E' || c == 'A') && (R >= min_req);
        
        bool can_I = (c == 'I' || c == 'A') && (L < x);
        
        if (can_E || can_I) {
            ll new_L = 1e18;
            ll new_R = -1e18;
            
            if (can_E) {
                new_L = min(new_L, max(L, min_req));
                new_R = max(new_R, R);
            }
            if (can_I) {
                new_L = min(new_L, L + 1);
                new_R = max(new_R, min(R + 1, x));
            }
            
            M++;       
            L = new_L; 
            R = new_R;
        }
    }
    
    cout << M << "\n";
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