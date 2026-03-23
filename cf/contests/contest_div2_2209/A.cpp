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

ll myfun(ll c, ll k, vector<ll> arr) {   
    
    sort(arr.begin(), arr.end());

    ll i =0;
    while(i<arr.size() && c-arr[i]>=0){
        ll temp=0;
        if(k>0){
            temp=c-arr[i];
            if(k-temp>=0){
                k-=temp;
            } else {
                temp=k;
                k=0;
            }
            
        }
        c+=arr[i];
        c+=temp;
        i+=1;
    }
    return c;

    
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        ll n, c, k;
        cin >> n >> c >> k;
        ll temp;
        vector<ll> arr;
        while(n--){
            cin >> temp;
            arr.push_back(temp);
        }
        
        cout << myfun(c, k, arr) << endl;
    }
    return 0;
}