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

string myfun(ll x, ll y) {

    ll calc = x+(4*y);
    if(calc%3==0 && calc>=0){
        calc = calc/3;
        if(y>0){
            for(ll i = y; i<(calc/2)+1; i++){
                if(calc-2*i>=0){
                    return "YES";
                } else {
                    return "NO";
                }
            }
            return "NO";
        } else {
            return "YES";
        }
        

    } else {
        return "NO";
    }
    
    
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        ll x;
        cin >> x;
        ll y;
        cin >> y;
        
        cout << myfun(x, y) << endl;
    }
    return 0;
}