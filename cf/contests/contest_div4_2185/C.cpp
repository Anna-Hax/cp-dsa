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

ll myfun(set<ll> unique_elements) {

    vector<ll> sorted_unique(unique_elements.begin(), unique_elements.end());

    int max_mex = 1;
    int current_run = 1;

    for (ll i = 1; i < sorted_unique.size(); ++i) {
        if (sorted_unique[i] == sorted_unique[i - 1] + 1) {
            current_run++;
        } else {
            current_run = 1;
        }
        max_mex = max(max_mex, current_run);
    }

    return max_mex;
}



signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        ll n;
        cin >> n;
        
        set<ll> unique_elements;
        while(n--) {
            ll val;
            cin >> val;
            unique_elements.insert(val);
        }
        cout << myfun(unique_elements) << endl;

    }
    return 0;
}