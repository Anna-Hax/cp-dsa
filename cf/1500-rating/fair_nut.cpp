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

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    string s;
    cin >> s;

    ll j=1;
    vector<ll> arr;
    for(ll i=0; i<s.size(); i++){
        if(s[i]=='a'){
            if(j>arr.size()){
                arr.push_back(1);
            } else {
                arr[j-1]+=1;
            }
        } 
        if(s[i]=='b'){
            j=arr.size()+1;
        }
    }

    if(arr.size()==0){
        cout << 0 << endl;
        return;
    }
    ll result=1;

    for(ll i=0; i<arr.size(); i++){
       // cout << arr[i];
        result=(result*(arr[i]+1))%INF;
    }


    cout << (result-1)%INF << endl;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int t;
    //cin >> t;
    //while (t--) {
        solve();
    //}
    return 0;
}