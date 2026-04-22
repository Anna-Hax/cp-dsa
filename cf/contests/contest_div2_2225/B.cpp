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


void solve() {
    string s;
    cin >> s;
    ll n = s.length();
    
    ll bad_pairs = 0;
    for (ll i = 0; i < n - 1; ++i) {
        if (s[i] == s[i + 1]) {
            bad_pairs++;
        }
    }

    if (bad_pairs <= 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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