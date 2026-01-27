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

vector<ll> myfun(vector<ll> arr_a, vector<ll> arr_b, vector<vector<ll>> indexes) {

    vector<ll> result;

    vector<ll> prefix_sum(arr_a.size(), 0);

    for(ll i = arr_b.size()-1; i>=0;i--){
        ll temp = max(arr_a[i], arr_b[i]);
        if(i!= arr_b.size()-1){
            prefix_sum[i]=max(temp, prefix_sum[i+1]);
        } else {
            prefix_sum[i]=temp;
        }
    }

    
    vector<ll> lawda_prefix(arr_b.size(), 0);
    lawda_prefix[0]=prefix_sum[0];
    for(ll i = 1; i<arr_b.size(); i++){
        lawda_prefix[i]=lawda_prefix[i-1]+prefix_sum[i];
    }
    for(ll i = 0; i<indexes.size(); i++){

        ll l = indexes[i][0];
        ll r = indexes[i][1];
        
        ll sum = lawda_prefix[r]-lawda_prefix[l]+prefix_sum[l];
        
        result.push_back(sum);
    }
    

    return result;
    
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        ll n, q;
        cin >> n >> q;
        vector<ll> arr_a;
        ll temp;
        for(ll i = 0; i<n; i++){
            cin >> temp;
            arr_a.push_back(temp);
        }

        vector<ll> arr_b;
        for(ll i = 0; i<n; i++){
            cin >> temp;
            arr_b.push_back(temp);
        }

        vector<vector<ll>> indexes;

        ll l, r;
        

        while(q--){
            cin >> l >> r;
            l--;
            r--;
            indexes.push_back({l, r}); 
        
        }

        vector<ll> result = myfun(arr_a, arr_b, indexes);
        //cout << "result" << endl;
        for(ll i = 0; i<result.size(); i++){
            cout << result[i] << " ";
        }
        cout << endl;

    }
    return 0;
}