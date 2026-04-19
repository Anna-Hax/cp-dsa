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

ll myfun(ll n, vector<ll> &arr, ll a, ll b) {

    vector<ll> newarr(n+1, 0);
    for(ll i=0; i<n; i++){
        newarr[i+1]=arr[i];
    }
    vector<ll> suffix_sum(n+2, 0);
    for(ll i=n; i>=1; i--){
        suffix_sum[i]=suffix_sum[i+1]+newarr[i];
    }
    ll minm=LLONG_MAX;
    for(ll i=0; i<=n; i++){
        minm=min(minm, (a+b)*newarr[i] + b*(suffix_sum[i+1]-(n-i)*newarr[i]));
    }
    return minm;
   
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

      
        ll n, a, b;
        cin >> n >> a >> b;
        vector<ll> arr;
        ll temp;
        for(ll i =0; i<n; i++){
            cin >> temp;
            arr.push_back(temp);
        }        
    
        cout << myfun(n, arr, a, b) << endl;

    }
    return 0;
}