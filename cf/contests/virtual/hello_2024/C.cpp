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

ll myfun(ll n, vector<ll>& arr) {
    // Initialize both tails with a value larger than any possible ai (n)
    // This ensures the first elements don't trigger a penalty.
    ll tail1 = n + 1;
    ll tail2 = n + 1;
    ll total_penalty = 0;

    for (ll x : arr) {
        // Find which tails can "fit" x (tail >= x)
        bool fits1 = (tail1 >= x);
        bool fits2 = (tail2 >= x);

        if (fits1 && fits2) {
            // Both work! Greedily pick the smaller tail to stay "tighter"
            if (tail1 < tail2) tail1 = x;
            else tail2 = x;
        } 
        else if (fits1) {
            // Only sequence 1 works without penalty
            tail1 = x;
        } 
        else if (fits2) {
            // Only sequence 2 works without penalty
            tail2 = x;
        } 
        else {
            // Both cause a penalty! 
            // Put it behind the smaller tail to preserve the larger one.
            total_penalty++;
            if (tail1 < tail2) tail1 = x;
            else tail2 = x;
        }
    }

    return total_penalty;
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        ll n;
        cin >> n;


        vector<ll> arr(n, 0);
        ll temp;

        for(ll i = 0; i<n; i++){
            cin >> temp;
            arr[i]=temp;
        }
        cout << myfun(n, arr) << endl;
    }
    return 0;
}