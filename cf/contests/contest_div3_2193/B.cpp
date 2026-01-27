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

vector<ll> myfun(vector<ll> arr) {

    vector<ll> arr_org = arr;
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    vector<ll> result;
    ll i;
    for(i =0; i<arr.size(); i++){
        if(arr[i]!=arr_org[i]){
            break;
        } else {
            result.push_back(arr[i]);
        }
    }

    
    if(i==arr.size()){
        return arr;
    }

    ll to_find = arr[i];

    ll j;
    for(j = i; j<arr.size();j++){
        if(arr_org[j]==to_find){
            break;
        }
    }
    

    ll temp = j;

    while(temp>=i){
        result.push_back(arr_org[temp]);
        temp--;
    }
    j+=1;

    for(j; j<arr.size();j++){
        result.push_back(arr_org[j]);
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
        vector<ll> arr;
        ll temp;
        while(n--){
            cin >> temp;
            arr.push_back(temp);
        }
        vector<ll> result = myfun(arr);
        for(ll i = 0; i<arr.size(); i++){

            cout << result[i] << " ";
        }
        cout << endl;

    }
    return 0;
}