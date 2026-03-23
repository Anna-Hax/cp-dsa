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

string myfun(vector<ll> &arr, ll m) {

    ll n = arr.size();
    vector<ll> zeroes(n, 0);
    for(ll i = 0; i<n; i++){
        string temp = to_string(arr[i]);
        ll count=0;
        for(ll j=temp.size()-1; j>=0; j--){
            if(temp[j]=='0'){
                count+=1;
            }else{
                zeroes[i]=count;
                break;
            }
        }
    }

    sort(zeroes.begin(), zeroes.end());
    reverse(zeroes.begin(), zeroes.end());
    ll anna_count=0;
    for(ll i =0; i<n; i++){
        if(i%2==0){
            anna_count+=zeroes[i];
        }
    }

    ll total_digits=0;
    for(ll i = 0; i<n; i++){
        ll num=log10(arr[i])+1;
        total_digits+=num;
    }
    if(total_digits-anna_count>=m+1){
        return "Sasha";
    }else {
        return "Anna";
    }
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

      
        ll n, m;
        cin >> n >> m;
        vector<ll> arr;
        ll temp;
        for(ll i =0; i<n; i++){
            cin >> temp;
            arr.push_back(temp);
        }        
    
        cout << myfun(arr, m) << endl;

    }
    return 0;
}