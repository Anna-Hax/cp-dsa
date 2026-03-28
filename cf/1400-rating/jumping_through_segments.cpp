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

bool check(ll k, vector<vector<ll>>& arr) {
    ll cur_min = 0, cur_max = 0;

    for (const auto& interval : arr) {
        cur_min -= k;
        cur_max += k;

        cur_min = max(cur_min, interval[0]);
        cur_max = min(cur_max, interval[1]);

        if (cur_min > cur_max) return false;
    }
    return true;
}

ll myfun(ll n, vector<vector<ll>>& arr) {

    ll high= 1e9;
    ll low=0;

    ll mid;
    while(low<high){
        mid=(high+low)/2;

        bool result=check(mid, arr);
        if(result){
            high=mid;
        }else{
            low=mid+1;
        }
    }

    return low;
    
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        ll n;
        cin >> n;

        vector<vector<ll>> arr(n, vector<ll>(2, 0));
        ll left, right;

        for(ll i = 0; i<n; i++){
            cin >> left;
            cin >> right;
            arr[i][0]=left;
            arr[i][1]=right;
        }
        cout << myfun(n, arr) << endl;
    }
    return 0;
}