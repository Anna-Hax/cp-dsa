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

vector<ll> myfun(ll n, vector<ll>& arr) {

    vector<ll> result(n, 0);

    for(ll i = 1; i < arr.size()-1; i++){
        result[i]=(arr[i-1]-2*arr[i]+arr[i+1])/2;
    }

    ll temp=arr[0];
    for(ll i = 1; i<result.size()-1; i++){
        temp-=result[i]*(i);
    }
    temp=temp/(n-1);
    result[n-1]=temp;

    temp = arr[n-1];
    for(ll i = 1; i<result.size()-1; i++){
        temp-=result[i]*(n-i-1);
    }
    temp=temp/(n-1);
    result[0]=temp;

    return result;
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        ll n;
        cin >> n;
        vector<ll> arr;
        ll temp;
        
        for(ll i = 0; i < n; i++){
            cin >> temp;
            arr.push_back(temp);
        }
        vector<ll> result = myfun(n, arr);

        for(ll i = 0; i<result.size(); i++){
            cout << result[i] << " ";
        }
        cout << endl;

    }
    return 0;
}