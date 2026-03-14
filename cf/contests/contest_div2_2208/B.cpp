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

ll myfun(ll n, ll k,ll p,ll m, vector<ll>& arr) {

    ll sum=0;
    ll minm;
    p-=1;
    ll temp;
    ll indx;
    ll count=0;
    while(sum<=m){
        if(p<k){
            if(sum+arr[p]<=m){
                sum+=arr[p];
                temp=arr[p];
                indx=p;
                p=n-1;
                count+=1;
            } else {
                break;
            }
            
        } else {
            minm=*min_element(arr.begin(), arr.begin()+k);
            if(sum+minm<=m){
                sum+=minm;
                p-=1;
                for(ll i = 0; i<k; i++){
                    if(arr[i]==minm){
                        indx=i;
                        break;
                    }
                }

                temp=arr[indx];
            } else {
                break;
            }
            
        }

        arr.erase(arr.begin()+indx);
        arr.push_back(temp);
    }

    return count;
    
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        ll n,k,p,m;
        cin >> n >> k >> p >> m;


        vector<ll> arr(n, 0);
        ll temp;

        for(ll i = 0; i<n; i++){
            cin >> temp;
            arr[i]=temp;
        
        }
        cout << myfun(n, k, p, m, arr) << endl;
    }
    return 0;
}