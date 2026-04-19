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

using namespace std;

void solve() {
    ll n;
    cin >> n;
    ll temp;
    vector<ll> arr(n, 0);
    for(ll i=0; i<n; i++){
        cin >> temp;
        arr[i]=temp;
    }


    vector<ll> dp(n+1, 0);
    for(ll i=n-1; i>=0; i--){
        ll j=n-i;
        if(j-arr[i]-1>=0){
            dp[j]=min(1+dp[j-1], dp[j-arr[i]-1]);
        } else {
            dp[j]=1+dp[j-1];
        }
    }
    cout << dp[n] << endl;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}