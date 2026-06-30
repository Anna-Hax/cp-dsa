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



void solve() {
    ll x;
    cin >> x;

    ll k = 0;
    ll temp = x;
    while(temp > 0){
        k++; 
        temp /= 10;
    }
    ll y = 1;
    for(ll i = 0; i < k; i++){
        y *= 10;
    }
    y += 1;
    cout << y << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}