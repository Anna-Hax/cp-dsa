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

ll myfun(ll n, vector<ll> &arr) {
    sort(arr.begin(), arr.end());
    ll i=0; 
    ll j=n-1;
    ll x=0;
    ll attack=0;
    while(j>=i){
        if(i!=j){
            if(arr[i]+x <= arr[j]){
                attack+=arr[i];
                x+=arr[i];
                i+=1;
               // cout << x << "x";
            } else {
                ll temp = x+arr[i]-arr[j];
                x=0;
                j-=1;
                attack+=arr[i]-temp+1;
                arr[i]=temp;
             //    cout << attack << " ";
            }
        } else {

            ll gap = arr[j] - x;
            if (gap > 1) {
                ll k = (gap - 1) / 2;
                x += k;
                arr[j] -= k;
                attack += k;
            }
            if(x==arr[j] || (x==0 && arr[j]==1)){
                attack+=1;
            } else {
                
                attack+=2;
            }
            
           
          //  x=(arr[i]-x)/2;
           // attack+=(arr[i]-x)/2+1;
           // cout << attack << " ";
            i+=1;
            j-=1;
        }
    }
    return attack;
   
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
        for(ll i =0; i<n; i++){
            cin >> temp;
            arr.push_back(temp);
        }        
    
        cout << myfun(n, arr) << endl;

    }
    return 0;
}