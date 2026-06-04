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


ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n, 0);
    for(ll i=0; i<n; i++){
        cin >> arr[i];
    }

    vector<vector<ll>> dp(2, vector<ll>(n+1, 0));
    for(ll i=1; i<=n; i++){
        if(arr[i-1]>0){
            dp[0][i]=dp[0][i-1]+1;
            dp[1][i]=dp[1][i-1];
        } else {
            dp[1][i]=dp[0][i-1]+1;
            dp[0][i]=dp[1][i-1];
        }
    }

    ll pos=0;
    ll neg=0;
    for(ll i=0; i<=n; i++){
        pos+=dp[0][i];
        neg+=dp[1][i];
    }

    cout << neg << " " << pos << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    //cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}

