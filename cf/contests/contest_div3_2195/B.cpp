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

string myfun(ll n, vector<ll>& arr) {
    vector<ll> a(n + 1);
    for(int i = 0; i < n; i++){
        a[i+1] = arr[i];
    } 

    for (int i = 1; i <= n; i += 2) { 
        vector<ll> current_values;
        vector<ll> required_indices;
        
        for (ll j = i; j <= n; j *= 2) {
            current_values.push_back(a[j]);
            required_indices.push_back(j);
        }
        
        sort(current_values.begin(), current_values.end());
        
        if (current_values != required_indices) {
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
        vector<ll> arr;
        ll temp;
        
        for(ll i = 0; i < n; i++){
            cin >> temp;
            arr.push_back(temp);
        }
        cout << myfun(n, arr) << endl;

    }
    return 0;
}