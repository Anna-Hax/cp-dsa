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

vector<ll> myfun(string s) {

    ll count = 0;

    vector<ll> result;
    vector<ll> ones;
    vector<ll> zeroes;
    for(ll i = 0; i<s.size(); i++){
        if(s[i]=='0'){
            count+=1;
            zeroes.push_back(i+1);
        } else {
            ones.push_back(i+1);
        }
    }
    ll count_1=s.size()-count;

    if(count_1%2==0){
        result.push_back(count_1);
        for(ll i = 0; i<ones.size(); i++){
            result.push_back(ones[i]);
        }

    } else {
        if(count%2!=0){
            result.push_back(count);
            for(ll i = 0; i<zeroes.size(); i++){
                result.push_back(zeroes[i]);
            }

        } else {
            return {-1};
        }
        
    }

    return result;
    
    
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
        
        vector<ll> result = myfun(s);
        if(result[0]==-1 || result[0]==0){
            cout << result[0] << endl;
        } else{
            cout << result[0] << endl;
            for(ll i = 1; i<result.size(); i++){
                cout << result[i] << " ";
            } 
            cout << endl;
        }
    }
    return 0;
}