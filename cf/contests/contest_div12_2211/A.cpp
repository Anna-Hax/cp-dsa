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

vector<ll> myfun(vector<ll> arr) {

    vector<ll> result(arr.size(), 2);
    if(arr.size()==1){
        result[0]=1;
    } 
    return result;
    
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
        while(n--){
            cin >> temp;
            arr.push_back(temp);
        }
        vector<ll> result = myfun(arr);
        for(ll i = 0;i<result.size(); i++){
            cout << result[i] << " ";
        }
        cout << endl;

    }
    return 0;
}