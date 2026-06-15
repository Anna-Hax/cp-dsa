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


void solve(){
    ll n;
    cin >> n;
    vector<ll> b(n, 0);
    for(ll i=0; i<n; i++){
        cin >> b[i];
    }

    sort(b.begin(), b.end(), greater<long long>());
    
    bool possible = true;
    if(n>2){
        for (int i = 0; i < n - 2; ++i) {
            if (b[i] <= 0 || b[i+1] <= 0 || b[i+2] <= 0 || b[i] == b[i+1] || b[i+1] == b[i+2] || (b[i] % b[i+1] != b[i+2])) {
                possible = false;
                break;
            }
        }
        
        if (b[n-2] <= 0 || b[n-1] <= 0 || b[n-2] == b[n-1]) {
            possible = false;
        }
    } else {
        if (b[0] <= 0 || b[1] <= 0) {
            possible = false;
        }
    
    }
    
    if (possible) {
        cout << b[0] << " " << b[1] << "\n";
    } else {
        cout << -1 << "\n";
    }
}

int main() {
    fastio;
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}