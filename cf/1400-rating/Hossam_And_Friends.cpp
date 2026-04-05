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

ll myfun(ll n, ll m, vector<vector<ll>> &arr) {

    sort(arr.begin(), arr.end());
    vector<ll> adj(n+1, n+1);
    ll count=0;
    for(ll i =m-1; i>=0; i--){   
        
        adj[arr[i][0]]=min(adj[arr[i][0]], arr[i][1]); 
       // cout << adj[arr[i][0]];
        if(arr[i][0]+1!=n+1){
            adj[arr[i][0]]=min(adj[arr[i][0]], adj[arr[i][0]+1]); 
        }       
    }
    for(ll i=n-1; i>=0; i--){
        adj[i]=min(adj[i], adj[i+1]); 
    }
 
    //cout << adj[1] << adj[2] << adj[3] << endl;
   
    for(ll i =1; i<=n; i++){
        count+=adj[i]-i;
    }
    return count;
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

      
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> arr(m, vector<ll>(2, 0));
        ll temp1, temp2;
        for(ll i =0; i<m; i++){
            cin >> temp1 >> temp2;
            if(temp2<temp1){
                arr[i][0]=temp2;
                arr[i][1]=temp1;
            } else {
                arr[i][0]=temp1;
                arr[i][1]=temp2;
            }
        }        
    
        cout << myfun(n, m, arr) << endl;

    }
    return 0;
}