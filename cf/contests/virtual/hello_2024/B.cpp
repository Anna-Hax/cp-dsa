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

ll myfun(ll n, vector<ll>& arr) {

    ll sum=0;
    for(ll i = 0; i<n; i++){
        sum+=arr[i];
    }

    return abs(sum);
    
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        ll n;
        cin >> n;

        string s;
        cin >> s;

        vector<ll> arr(n, 0);
        ll temp;

        for(ll i = 0; i<n; i++){
            if(s.substr(i, 1)=="+") arr[i]=1;
            if(s.substr(i, 1)=="-") arr[i]=-1;
        }
        cout << myfun(n, arr) << endl;
    }
    return 0;
}