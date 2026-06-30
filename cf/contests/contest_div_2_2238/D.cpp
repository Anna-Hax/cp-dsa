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
    ll dist_p_fac = 0;      
    ll total = 0;  
    for (ll p = 2; p*p<= n; p+=1) {
        if (n % p == 0) {
            dist_p_fac+=1;
            while (n % p == 0) {
                total+=1;
                n/= p;
            }
        }
    }
    if (n > 1) {
        dist_p_fac+=1;
        total+=1;
    }
    cout << total+dist_p_fac - 1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
       
        solve();
    }
    return 0;
}