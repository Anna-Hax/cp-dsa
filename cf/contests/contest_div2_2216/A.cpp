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

vector<ll> myfun(ll n, ll k, vector<ll>& arr, vector<vector<ll>>& b) {

    vector<ll> result;
 
    sort(b.begin(), b.end());
    for(ll i=b.size()-1; i>=0; i--){
        ll temp=k+1-b[i][0];
        while(temp--){
            result.push_back(b[i][1]);
        }
    }

    return result;

    
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        ll n, k;
        cin >> n >> k;

        vector<ll> arr(k, 0);
        vector<vector<ll>> b(n, vector<ll>(2, 0));
        ll temp;

        for(ll i = 0; i<k; i++){
            cin >> temp;
            arr[i]=temp; 
        }
        for(ll i = 0; i<n; i++){
            cin >> temp;
            b[i][0]=temp;
            b[i][1]=i;
        }
        vector<ll> result=myfun(n, k, arr, b);
        cout << result.size() << endl;
        for(ll i=0; i<result.size(); i++){
            cout << result[i]+1 << " ";
        }
        cout << endl;
    }
    return 0;
}