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
    ll num = pow(2, n);
    ll j = num*2 - 1;
    vector<vector<ll>> arr(n+1);
    for(ll i=0; i<num; i++){
        ll temp=0;
        ll tempnum=i;
        while (tempnum > 0) {
            if ((tempnum & 1) == 1) {
                temp+= 1;
                tempnum >>= 1; 
            } else {
                break;
            }
        }
       // cout << temp << "djkq" << tempnum;
        arr[temp].push_back(i);
    }

    j=n;
    while(j>=0){
        for(ll i=0; i<arr[j].size(); i++){
            cout << arr[j][i] << " ";
        }
        j-=1;
    }

    cout << "\n";

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

