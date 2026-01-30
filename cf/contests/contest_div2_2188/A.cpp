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

    ll i, j;

    if(n%2==0){
        i=n/2;
        j=i+1;
    } else {
        i=(n+1)/2;
        j=i-1;
    }

    for(ll m =0; m<n-1; m+=2){
        arr[m]=i;
        arr[m+1]=j;
        if(n%2==0){
            i-=1;
            j+=1;
        } else {
            j-=1;
            i+=1;
        }
        
    }

    if(n%2!=0){
        arr[n-1]=n;
    }
    return arr;
    
    
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        ll n;
        cin >> n;

        vector<ll> arr = myfun(n);
        for(ll i = 0; i<arr.size(); i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}