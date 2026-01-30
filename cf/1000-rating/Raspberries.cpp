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

ll myfun(ll k, vector<ll> arr) {

    ll min_num = INT_MAX;

    for(ll i =0; i<arr.size(); i++){
        ll temp = arr[i]%k;
        if(temp==0){
            return 0;
        }
        min_num=min(min_num, k-temp);
    }
    
    return min_num;
    
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        ll n, k;
        cin >> n >> k;
        vector<ll> arr;
        ll temp;
        while(n--){
            cin >> temp;
            arr.push_back(temp);
        }
        cout << myfun(k,arr) << endl;

    }
    return 0;
}