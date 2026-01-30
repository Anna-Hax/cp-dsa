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

vector<ll> myfun(set<ll> arr) {

    vector<ll> result(arr_a.size(), -1);

    if(arr[0]==1){
        result[0]=1;
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
        set<ll> arr;
        ll temp;
        for(ll i = 0; i<n; i++){
            cin >> temp;
            arr.insert(temp);
        }

        cout << myfun(arr) << endl;

    }
    return 0;
}