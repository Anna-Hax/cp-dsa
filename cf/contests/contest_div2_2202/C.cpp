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

ll myfun(vector<ll> arr) {

    ll result = 1;
    ll i = 0;
    ll j=1;
    while(j<arr.size()){
        if(arr[j]>arr[j-1]){
            if(arr[j]-arr[j-1] > 1){
                result+=1;
                i=j;
            } 
        } else if (arr[j]<arr[j-1]){

            if(arr[j]>arr[i]){
                j+=1;
            } else {
                i=j;
                result+=1;
            }
            
            
        } else {
            if(arr[j]<=arr[i]){
                result+=1;
                i=j;
            }
        }
        j+=1;
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
        for(ll i = 0; i<n; i++){
            cin >> temp;
            arr.push_back(temp);
        }

        cout << myfun(arr) << endl;
    }
    return 0;
}