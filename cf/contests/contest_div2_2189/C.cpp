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

vector<ll> myfun(ll n) {

    vector<ll> arr(n, 0);
    
    for(ll i = 2; i<n; i++){
        ll temp = (i)^1;
        if(temp >= n) {
            arr[i-1] = temp;
            arr[0] = i;
        }else
        {
            arr[temp-1]=i;
        }
        
    }
    arr[n-1]=1;
    // arr[0]=n;
    if(arr[0] == 0) arr[0] = n;
    if(n==3){
        return {2, 1, 3};
    } else {
        return arr;
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
       
        vector<ll> result = myfun(n);
        for(auto& at: result){
            cout << at << " ";
        }
        cout << endl;
    }
    return 0;
}