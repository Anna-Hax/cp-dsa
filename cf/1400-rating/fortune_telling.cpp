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
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> arr(n, 0);
    ll odd_count=0;
    for(ll i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]%2!=0){
            odd_count+=1;
        }
    }
     
    ll alice = x;
    ll bob = x+3;

    for(ll i=0; i<n; i++){
        alice=(alice+arr[i]);
        bob=(bob+arr[i]);
    }

    if(y%2==0){
        if(alice%2==0){
            cout << "Alice" << endl;
        } else{
            cout << "Bob" << endl;
        }
    } else {
        if(alice%2==0){
            cout << "Bob" << endl;
        } else{
            cout << "Alice" << endl;
        }
    }
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

