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

string myfun(ll n, vector<ll>& arr) {
    
    sort(arr.begin(), arr.end());

    ll j = n-1;
    ll i = 0;

    unordered_map<ll, ll> mp;
    for(ll i = 0; i<n; i++){
        mp[perm[i]]=i;
    }

    ll count = 0;
    
    
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        ll n;
        cin >> n;
        vector<ll> arr;
        ll temp;
        for(ll i = 0; i < n; i++){
            cin >> temp;
            perm.push_back(temp);
        }
       
        cout << myfun(n, arr) << endl;

    }
    return 0;
}