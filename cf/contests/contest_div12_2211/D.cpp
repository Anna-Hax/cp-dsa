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

string myfun(ll k, vector<ll> a, vector<ll> b) {

    unordered_map<ll, ll> mp_b;
    if(k==1){
        for(ll i =0; i<a.size(); i++){
            if(b[i]!=a[i]){
                if(b[i]==-1){
                    b[i]=a[i];
                } else {
                    return "NO";
                }
            }
        }
        return "YES";
    }

    unordered_map<ll, ll> mp_2, mp_1;

    for(ll i =0; i<k; i++){
        if(b[i]!=-1){
            mp_b[b[i]]+=1;
        }
        mp_1[a[i]]+=1;
    }
    ll j=0;
    ll i=0;
    
    while(i<a.size() && j<k){
        if(mp_b[a[i]]==mp_1[a[i]]){
            i+=1;
        } else {
            if(b[j]==-1){
                b[j]=a[i];
                j+=1;
                i+=1;
            } else {
                j+=1;
            }
        }
    }

    
    for(ll m=0; m<k; m++){
        mp_2[b[m]]+=1;
        
    }
    for(ll m=0; m<k; m++){
        if(mp_2[a[m]]!=mp_1[a[m]]){
            return "NO";
        }
    }
    for(i=k; i<a.size(); i++){
        mp_2[b[i-k]]-=1;
        mp_1[a[i-k]]-=1;
        mp_2[a[i]]+=1;
        
        if(b[i-k]==a[i]){
            if(b[i]!=a[i] && b[i]!=-1){
                return "NO";
            } else if(b[i]==-1){
                b[i]=a[i];
            }
        } else {
            if(b[i]==-1){
                if(mp_2[a[i]]==mp_1[a[i]]){
                    b[i]=b[i-k];
                } else {
                    b[i]=a[i];
                }
            } else {
                mp_2[b[i]]+=1;
                if(mp_2[a[i]]!=mp_1[a[i]]){
                    return "NO";
                }
                mp_2[b[i]]-=1;
            }
        }
        mp_2[b[i]]+=1;
   
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
        ll k;
        cin >> k;
        vector<ll> a, b;
        ll temp;
        for(ll i =0;i<n; i++){
            cin >> temp;
            a.push_back(temp);
        }
        while(n--){
            cin >> temp;
            b.push_back(temp);
        }
        cout << myfun(k, a, b) << endl;

    }
    return 0;
}