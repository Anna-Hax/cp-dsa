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
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



void solve() {
    int n;
    cin >> n;
    
    vector<ll> h(n);
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }

    for (int i = 0; i < n; ++i) {
        vector<ll> R(n, 0); 
        vector<ll> L(n, 0);
        
        ll current_max_R = 0;
        for (int step = 1; step < n; ++step) {
            int prev_vessel = (i + step - 1) % n;
            int curr_vessel = (i + step) % n;
            current_max_R = max(current_max_R, h[prev_vessel]);
            R[curr_vessel] = current_max_R;
        }

        ll current_max_L = 0;
        for (int step = 1; step < n; ++step) {
            int next_vessel = (i - step + n) % n;
            int pipe_index = next_vessel; 
            current_max_L = max(current_max_L, h[pipe_index]);
            L[next_vessel] = current_max_L;
        }

        ll total_volume = 0;
        for (int j = 0; j < n; ++j) {
            if (j != i) {
                total_volume += min(R[j], L[j]);
            }
        }
        
        cout << total_volume << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
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