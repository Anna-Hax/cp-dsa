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

ll myfun(vector<ll> arr, ll h, ll l) {

    ll sum = h+l;
    ll valid=0;
    ll count=0;
    for(ll i =0; i<arr.size(); i++){
        if (arr[i]>max(h,l)){
            valid+=1;
        } 
        if(arr[i]<=min(h,l)){
            count+=1;
        }
    }

    valid = arr.size()-valid;

    if(count*2<=valid){
        return count;
        
    } else {
        return valid/2;
    }
    
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        ll n;
        cin >> n;
        ll h;
        cin >> h;
        ll l;
        cin >> l;
        
        vector<ll> arr;
        ll val;

        while(n--) {
            cin >> val;
            arr.push_back(val);
        }
        cout << myfun(arr, h, l) << endl;

    }
    return 0;
}