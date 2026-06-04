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


ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n, 0);
    for(ll i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    ll count_sm=0;
    ll count_g=0;
    ll median;
    if(n%2==0){
        median = (arr[n/2]+arr[n/2 - 1])/2;
    } else {
        median = arr[n/2];
       // cout << median;
    }
    
    for(ll i=0; i<n; i++){
        if(arr[i]>median){
            count_g+=1;
        } 
        if(arr[i]<median){
            count_sm+=1;
        }
    }

    cout << max(count_g, count_sm) << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

