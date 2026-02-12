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

ll myfun(vector<vector<ll>> &arr) {

    vector<ll> min_elements;

    for(ll i = 0; i<arr.size(); i++){
        vector<ll> temp_arr = arr[i];

        ll min_arr = *min_element(temp_arr);

        (arr[i]).erase((arr[i]).begin()+i);
    }

    ll globalmin =*min_element(min_elements);

    for(i = 0; i<arr.size())


    
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        ll n;
        cin >> n;
        vector<vector<ll>> arr;
        while(n--){
            ll a;
            cin >> a;
            vector<ll> temp_arr;
            ll temp;
            for(ll i =0; i<a; i++){
                cin >> temp;
                temp_arr.push_back(temp);
            }

            arr.push_back(temp_arr);
        }
    
        cout << myfun(arr) << endl;

    }
    return 0;
}