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

ll myfun(vector<ll> arr) {

    vector<ll> arr_org = arr;

    sort(arr.begin(), arr.end());

    vector<ll> arr_new;

    for(ll i = 0; i<arr.size(); i++){
        if(arr_org[i]!=arr[i]){
            arr_new.push_back(arr[i]);
        }
    }
    if(arr_new.size()==0){
        return -1;
    }

    ll max_el = arr[arr.size()-1]; 
    ll min_el = arr[0];
    ll k = INT_MAX;
    for(ll i = 0; i<arr_new.size(); i++){
        ll temp = max(max_el-arr_new[i], arr_new[i]-min_el);
        if(temp<k){
            k=temp;
        }
    }

    return k;
    
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
        for(ll i = 0; i<n; i++){
            cin >> temp;
            arr.push_back(temp);
        }

        cout << myfun(arr) << endl;
    }
    return 0;
}