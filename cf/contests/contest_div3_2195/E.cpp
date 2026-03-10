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

vector<ll> myfun(ll n, vector<ll>& arr) {

  
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        ll n;
        cin >> n;
        vector<vector<ll>> arr;
        ll temp1, temp2;
        
        for(ll i = 0; i < n; i++){
            cin >> temp1 >> temp2;
            arr.push_back({temp1, temp2});
            
        }
        vector<ll> result = myfun(n, arr);

        for(ll i = 0; i<result.size(); i++){
            cout << result[i] << " ";
        }
        cout << endl;

    }
    return 0;
}