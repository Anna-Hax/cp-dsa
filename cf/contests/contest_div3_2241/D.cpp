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
#include <cmath>
#include <set>

void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n, 0);
    vector<ll> b(n, 0);
    for(ll i=0; i<n; i++){
        cin >> a[i];
    } 
    for(ll i=0; i<n; i++){
        cin >> b[i];
    } 
    ll sum=0;
    for(ll i=0; i<n; i++){
        ll temp = b[i]-a[i];
        sum+=temp;
        if(sum<0){
            cout << "NO" << "\n";
            return;
        }
    }

    cout << "YES" << "\n";
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