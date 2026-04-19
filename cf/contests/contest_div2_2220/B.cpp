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

    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--) {
        ll n, m;
        cin >> n >> m;
        
        vector<ll> a(n+1);
        for(int i = 1; i <= n; i++) cin >> a[i];
        
        bool ok = true;
        ll run = 1;
        for(ll i = 2; i <= n; i++) {
            if(a[i] == a[i-1]) {
                run++;
                if(run >= m) {
                    ok = false;
                    break;
                }
            } else {
                run = 1;
            }
        }
        
        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}