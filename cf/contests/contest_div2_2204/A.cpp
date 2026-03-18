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

ll myfun(string s) {   
    ll count=1;
    for(ll i =0; i<s.size(); i++){
        if(s.substr(i, 1)=="R"){
            count+=1;
        }else {
            break;
        }
    }
    return count;
    
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        ll x;
        cin >> x;
        string s;
        cin >> s;
        
        cout << myfun(s) << endl;
    }
    return 0;
}