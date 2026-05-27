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
const ll INF = 1e9 + 7;
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

ll factorial(ll n) {
    if (n < 0) return -1; // Factorials not defined for negative numbers
    
    ll fact = 1;
    for (ll i = 1; i <= n; i++) {
        fact = (fact*i)%INF;
    }
    return fact;
}

ll solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++){
        cin >> arr[i];
    }

    unordered_map<ll, ll> mp;
    for(ll i=0; i<n; i++){
        mp[arr[i]]+=1;
    }


    ll ans=0;
    ll sum = arr[0];
    for(ll j=1; j<arr.size(); j++){
        sum=sum&arr[j];
    }
    if(mp[sum]>1){
        ans=(((mp[sum]*(mp[sum]-1))%INF)*(factorial(n-2)))%INF;
    }
            
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
    return 0;
}