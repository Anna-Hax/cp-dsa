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

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll myfun(vector<ll> &arr){
    
    ll n=arr.size();
    ll count = 0;
    for (ll i = 0; i < n; i++) {
        ll current_gcd_requirement = 0;

        if (i == 0) {
            current_gcd_requirement = gcd(arr[0], arr[1]);
        } else if (i == n - 1) {
            current_gcd_requirement = gcd(arr[n - 2], arr[n - 1]);
        } else {

            ll g1 = gcd(arr[i-1], arr[i]);
            ll g2 = gcd(arr[i], arr[i+1]);
            current_gcd_requirement = (g1 * g2) / gcd(g1, g2); 
        }

        if (arr[i] > current_gcd_requirement) {
            count++;
            arr[i]=current_gcd_requirement;
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
 
        ll n;
        cin >> n;
        vector<ll> arr;
        ll temp;
        for(ll i =0; i<n; i++){
            cin >> temp;
            arr.push_back(temp);
        }
        while(n--){
            cin >> temp;
        }
 
        cout << myfun(arr) << endl;
 
    }
    return 0;
}