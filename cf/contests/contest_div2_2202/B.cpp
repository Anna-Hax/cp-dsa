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

string myfun(ll n, string s) {

    if(s.size()!=n){
        return "NO";
    } 

    ll i = 1;
    ll j = n;
    for(ll m=0; m<s.size(); m++){
        string mchar=s.substr(m, 1);
        if(i%2!=0 && mchar=="a"){
            i++;
        } else if(j%2!=0 && mchar=="a"){
            j--;
        } else if(i%2==0 && mchar=="b"){
            i++;
        } else if(j%2==0 && mchar=="b"){
            j--;
        } else if (mchar=="?"){
            if(i%2==0 && j%2!=0){
                if(s.substr(m+1, 1)=="a"){
                    i++;
                } else if(s.substr(m+1, 1)=="b") {
                    j--;
                } else {
                    i++;
                }
            }else if(i%2!=0 && j%2==0){
                if(s.substr(m+1, 1)=="b"){
                    i++;
                } else if(s.substr(m+1, 1)=="a") {
                    j--;
                } else {
                    i++;
                }
            } else {
                i++;
            }
        } else {
            return "NO";
        }
    }

    return "YES";
    
    
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        ll n;
        cin >> n;
        string s;
        cin >> s;
        cout << myfun(n, s) << endl;
    }
    return 0;
}