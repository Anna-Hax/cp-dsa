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

ll myfun(ll n, ll h, ll k, vector<ll> arr) {

    ll sum=0;
    ll result=0;
    ll total_sum = 0;
    for(ll x : arr){
        total_sum += x;
    }


    if (h > total_sum) {
        
        ll cycles = (h - total_sum) / total_sum; 
        if ((h - total_sum) % total_sum != 0) cycles++; 

        if (cycles > 0) {
            result += cycles * (n + k);
            h -= cycles * total_sum;
        }
    }

    
    while (h > total_sum) {
        h -= total_sum;
        result += (n + k);
    }
    vector<ll> suf_max(n);
    suf_max[n-1] = arr[n-1];
    for (ll i = n - 2; i >= 0; i--) {
        suf_max[i] = max(arr[i], suf_max[i+1]);
    }
    

    ll min_m=arr[0];
    ll max_m=*max_element(arr.begin()+1, arr.end());
    sum=0;
    ll mybool=false;
    for(ll j = 0; j<arr.size()-1; j++){
        min_m=min(min_m, arr[j]);
        if(max_m==arr[j]){
            max_m = (j + 1 < n) ? suf_max[j+1] : 0;
        }

        if(max_m>min_m){

            sum+=arr[j];
            sum+=max_m;
            sum-=min_m;
            
            if(sum>=h){
                result+=j+1;
                mybool=true;
                break;
            }
            sum-=max_m;
            sum+=min_m;

        } else {
            sum+=arr[j];
            if(sum>=h){
                result+=j+1;
                mybool=true;
                break;
            }
        }
        
        
    }

    if(mybool){
        return result;
    } else {
        return result+arr.size();
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
        ll h, k;
        cin >> h >> k;
        vector<ll> arr;
        ll temp;
        for(ll i = 0; i<n; i++){
            cin >> temp;
            arr.push_back(temp);
        }

        cout << myfun(n, h, k, arr) << endl;
    }
    return 0;
}