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

ll myfun(ll p, vector<vector<ll>> arr) {

    ll n = arr.size();
    ll price;

    if(p<=arr[0][0]){
        return arr.size()*p;
    } else {
        ll count=1;
        ll i = 0;
        price = p;
        while(count<n && arr[i][0]<=p){
            if(count+arr[i][1]<=n){
                count+=arr[i][1];
                price+=(arr[i][0]*arr[i][1]);
            } else {
                price+=(arr[i][0])*(n-count);
                count=n;

            }
            i++;
        }
        if(count<n){
            price+=p*(n-count);
        }
    }

    return price;
    
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        ll n, p;
        cin >> n >> p;
        vector<ll> arr_a, arr_b;
        ll temp;
        for(ll i =0; i<n; i++){
            cin >> temp;
            arr_a.push_back(temp);
        }

        for (ll j = 0; j<n; j++){
            cin >> temp;
            arr_b.push_back(temp);
        }

        vector<vector<ll>> arr;

        for(ll m = 0; m<arr_a.size(); m++){
            arr.push_back({arr_b[m], arr_a[m]});
        }

        sort(arr.begin(), arr.end());
        cout << myfun(p,arr) << endl;

    }
    return 0;
}