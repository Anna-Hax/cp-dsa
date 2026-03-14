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

string myfun(vector<vector<ll>>& arr) {

    unordered_map<ll, ll> mp;
    ll maxm=0;
    ll n = arr.size();


    for(ll i = 0; i<n; i++){
        for(ll j = 0; j<n; j++){
            if(mp[arr[i][j]]){
                mp[arr[i][j]]+=1;
                maxm=max(maxm, mp[arr[i][j]]);
            } else {
                mp[arr[i][j]]=1;
                maxm=max(maxm, mp[arr[i][j]]);
            }
        }
    }

    ll num = pow(n, 2) - n;
    if(maxm<=num){
        return "YES";
    } else {
        return "NO";
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

        vector<vector<ll>> arr(n, vector<ll>(n, 0));
        ll temp;

        for(ll i = 0; i<n; i++){
            for(ll j = 0; j<n; j++){
                cin >> temp;
                arr[i][j]=temp;
            }
        }
        cout << myfun(arr) << endl;
    }
    return 0;
}