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

ll search_b(vector<ll> &a, vector<ll> &prefix_b, ll n, ll i){

    ll j=n-1;
    ll mid, ans;
    while(j>=i){
        mid=(j+i)/2;
        ll temp;
        if(i==0){
            temp=prefix_b[mid];
        }else{
            temp=prefix_b[mid] - prefix_b[i-1];
        }
        if(a[i]<=temp){
            ans=mid;
            j=mid-1;
        } else{
            i=mid+1;
        }
    }
    return ans;
}


vector<ll> myfun(ll n, vector<ll> &a, vector<ll> &b) {
    
    vector<ll> prefix_a(n, 0);
    prefix_a[0]=a[0];
    vector<ll> prefix_b(n, 0);
    prefix_b[0]=b[0];
    for(ll i=1; i<n; i++){
        prefix_a[i]=prefix_a[i-1]+a[i];
        prefix_b[i]=prefix_b[i-1]+b[i];
    }

    vector<ll> result(n, 0);
    for(ll i=0; i<n; i++){
        ll index = search_b(a, prefix_b, n, i);
        result[i]=index;
    }
    vector<ll> final_result(n, 0);

    for(ll i=0; i<n; i++){
        for(ll j=i; j<result[i]; j++){
            final_result[j] += b[j];
        }
        ll temp=a[i]-prefix_b[result[i]];
        final_result[i]=b[i]+temp;
    }
    return final_result;
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

      
        ll n;
        cin >> n;
        vector<ll> a, b;
        ll temp;
        for(ll i =0; i<n; i++){
            cin >> temp;
            a.push_back(temp);
        } 
        for(ll i =0; i<n; i++){
            cin >> temp;
            b.push_back(temp);
        }        
    
        vector<ll> result=myfun(n, a, b);
        for(ll i=0; i<n; i++){
            cout << result[i] << " ";
        }
        cout << endl;

    }
    return 0;
}