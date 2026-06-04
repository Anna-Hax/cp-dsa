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


void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n, 0);
    for (ll i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    ll current_sum = 0;
    ll max_height = -1; 

    for (ll i = 0; i < n; i++) {
        current_sum += arr[i];
        ll possible_h = current_sum / (i + 1);

        if (i == 0) {
            max_height = possible_h;
        } else {
            max_height = min(max_height, possible_h);
        }

        cout << max_height << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}