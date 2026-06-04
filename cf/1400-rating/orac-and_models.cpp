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
    
    vector<ll> arr(n + 1);
    for (ll i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    ll maxm = 1;

    vector<ll> dp(n+1, 1);

    for(ll i=1; i<=n; i++){
        for(ll j=2*i; j<=n; j+=i){
            if(arr[j]>arr[i]){
                dp[j] = max(dp[j], dp[i]+1);
            }
        }

        maxm = max(maxm, dp[i]);
    }

    cout << maxm << "\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}