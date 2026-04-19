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

ll myfun(ll n, vector<ll> p, vector<ll> &arr) {
    vector<ll> newarr;
    ll j=0;
    ll curr=arr[0];
    newarr.push_back(arr[0]);
    for(ll i=0; i<n; i++){
        if(curr!=arr[i]){
            newarr.push_back(arr[i]);
            curr=arr[i];
        }
        if(p[j]==i+1){
            p[j]=newarr.size()-1;
            if(p.size()>j+1){
                j+=1;
            }
            
        }
    }

   if(newarr.size()==1){
    return 0;
   }
   ll ans=INT_MAX;
   
   for(ll m=0; m<p.size(); m++){
     ll left=0;
    ll right=0;
    ll k=p[m];
    for(ll i=0; i<newarr.size(); i++){
     if(i>k){
         right+=1;
     } 
     if(i<k){
         left+=1;
     }
    }
    if(newarr[0]==newarr[k] && k!=0){
     left-=1;
    }
    if(newarr[newarr.size()-1]==newarr[k] && k!=newarr.size()-1){
     right-=1;
    }

    ans=min(ans, max(right, left)+1);
   }
   return ans;
   

}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> arr;
        ll temp;
        for(ll i =0; i<n; i++){
            cin >> temp;
            arr.push_back(temp);
        }  
        vector<ll> p;
        for(ll i=0; i<k; i++){
            cin >> temp;
            p.push_back(temp);
        }    
    
        cout << myfun(n, p, arr) << endl;

    }
    return 0;
}