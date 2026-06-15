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
    ll k;
    cin >> n >> k;
    
    map<ll, ll> freq;
    for (ll i = 0; i < n; ++i) {
        ll val;
        cin >> val;
        freq[val]++;
    }
    
    vector<ll> U;
    vector<ll> C;
    for (auto const& [val, count] : freq) {
        U.push_back(val);
        C.push_back(count);
    }
    
    ll r = U.size();
    vector<bool> can_jump_to_L(r, false);
    
    ll max_j = r - 1;
    ll valid_L_count = 0;
    
    for (ll i = r - 1; i >= 0; --i) {
        while (max_j > i && U[max_j] - U[i] > k) {
            if (!can_jump_to_L[max_j] && (C[max_j] % 2 != 0)) {
                valid_L_count--;
            }
            max_j--;
        }
        
        if (valid_L_count > 0) {
            can_jump_to_L[i] = true;
        } else {
            can_jump_to_L[i] = false;
        }
        
        if (!can_jump_to_L[i] && (C[i] % 2 != 0)) {
            valid_L_count++;
        }
    }
    
    bool arseniy_can_win = false;
    for (ll i = 0; i < r; ++i) {
        if (can_jump_to_L[i] || (C[i] % 2 == 0)) {
            arseniy_can_win = true;
            break;
        }
    }
    
    if (arseniy_can_win) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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