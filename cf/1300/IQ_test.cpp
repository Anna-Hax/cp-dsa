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
    ll zeroes=0;
    for(ll i=0; i<n; i++){
        cin >> arr[i];
        arr[i]=arr[i]%2;
        if(arr[i]==0){
            zeroes+=1;
        }
    }
    if(zeroes==1){
        for(ll i=0; i<n; i++){
            if(arr[i]==0){
                cout << i+1 << "\n";
                return;
            }
        }
    } else {
        for(ll i=0; i<n; i++){
            if(arr[i]!=0){
                cout << i+1 << "\n";
                return;
            }
        }
    }


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    //cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}

