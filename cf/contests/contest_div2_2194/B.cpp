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

ll myfun(ll x, ll y, vector<ll>& arr) {
    ll sum = 0;
    
    for(ll i = 0; i< arr.size(); i++) {
        sum += (arr[i] / x) * y;
    }

    ll max_m = -1;

    for(ll i = 0; i< arr.size(); i++) {
       
        ll current_money = sum - (arr[i] / x) * y + arr[i];
        
        if(current_money > max_m) {
            max_m = current_money;
        }
    }

    return max_m;
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        ll n, x, y;
        cin >> n >> x >> y;
        vector<ll> arr;
        ll temp;
        while(n--){
            cin >> temp;
            arr.push_back(temp);
        }
        cout << myfun(x, y ,arr) << endl;

    }
    return 0;
}