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

string myfun(ll n, vector<ll> &arr) {
    bool div5=false;

    for(ll i=0; i<n; i++){
        if(arr[i]%5==0){
            div5=true;
            break;
        }
    }
    if(!div5){
       // sort(arr.begin(), arr.end());
        //while(true){
        //    if(arr[n-1]%10 != 2){
        //        arr[n-1]=arr[n-1]%10 + arr[n-1];
        //    } else {
        //        //arr[n-1]=arr[n-1]%10 + arr[n-1];
        //        //arr[n-1]=arr[n-1]%10 + arr[n-1];
        //        break;
        //    }
//
        //}
        for(ll i=0; i<n; i++){
            while(true){
                if(arr[i]%10!=2){
                    arr[i]=arr[i]+(arr[i]%10);
                } else {
                    arr[i]=arr[i]%20;
                    break;
                }
            }
        }
        for(ll i=0; i<n-1; i++){
            if(arr[i]!=arr[i+1]){
                return "No";
            }
        }
        
        
    } else {
        for(ll i=0; i<n; i++){
            if(arr[i]%5!=0){
                return "No";
            }
            if(arr[i]%10 != 0){
                arr[i]+=5;
            }
        }
        for(ll i=0; i<n-1; i++){
            if(arr[i]!=arr[i+1]){
                return "No";
            }
        }

    }
    return "Yes";
   
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