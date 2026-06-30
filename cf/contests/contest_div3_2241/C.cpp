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
#include <cmath>
#include <set>

void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;

    string new_s="";
    char prev=s[0];
    new_s+=prev;
    for(ll i=1; i<n; i++){
        if(s[i]!=prev){
            new_s+=s[i];
            prev=s[i];
        }
    }

    if(new_s.size()==1){
        cout << 1 << "\n";
    } else if (new_s.size()==2){
        if(new_s[0]==new_s[1]){
            cout << 1 << "\n";
        } else {
            cout << 2 << "\n";
        }
    } else {
        cout << 1 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        solve();
    }
    return 0;
}