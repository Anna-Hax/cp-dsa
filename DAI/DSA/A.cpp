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

ll myfun(ll m, vector<ll> arr) {   
    
    sort(arr.begin(), arr.end());
    ll sum=0;
    ll n = arr.size();
    ll minm= min(m, n);
    for(ll i = 0; i<minm; i++){
        if(arr[i]<=0){
            sum+=arr[i];
        }
        
    }

    return abs(sum);
    
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;
    ll temp;
    vector<ll> arr;
    while(n--){
        cin >> temp;
        arr.push_back(temp);
    }
    
    cout << myfun(m, arr) << endl;
    
    return 0;
}