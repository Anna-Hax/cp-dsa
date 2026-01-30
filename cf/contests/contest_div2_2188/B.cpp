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

    ll count=0;

    if(s.size()==1 || s.size()==2){
        return 1;
    }

    for(ll i = 0; i <s.size(); i++){
        if(s[i]=='1'){
            count+=1;
        }
    }

    ll index=0;

    ll zero_count=0;

    for(ll i = 0; i <s.size(); i++){
        if(s[i]=='1'){
            index=i;
            break;
        } else {
            zero_count+=1;
        }
    }

   // cout << "zero" << zero_count << endl;
    ll n = s.size();

    if(count==0){
        if(s.size()==1){
            return 1;
        } else {
            ll myzeroes = s.size()-1;
            return (myzeroes/3)+1;
        }
    }

    ll cons_count=0;
    ll result = 0;
    for(ll i = index; i <s.size(); i++){
        if(s[i]=='0'){
            cons_count+=1;
        } else {
            cons_count-=3;
            if(cons_count>=0){
                result+=(cons_count/3)+1;
            }
            //cout << "result" << result << endl;
            cons_count=0;
        }
    }
    
    //cout << "result" << result << endl;


    if(zero_count==0){
        result+=0;
    } else if(zero_count==1){
        result+=0;
    } else if(zero_count==2){
        result+=1;
    } else {
        zero_count-=2;
        result+=(zero_count/3)+1;
    }

    //cout << "result" << result << endl;


    if(cons_count==0){
        result+=0;
    } else if(cons_count==1){
        result+=0;
    } else if(cons_count==2){
        result+=1;
    } else {
        cons_count-=2;
        result+=(cons_count/3)+1;
    }

    //cout << "result" << result << endl;

    return result+count;

    
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

        cout << myfun(s) << endl;
    }
    return 0;
}