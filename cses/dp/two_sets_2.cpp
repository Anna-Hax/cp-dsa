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

 
void solve(){
    ll n;
    cin >> n;

    ll sum = (n*(n+1))/2;

    if(sum%2!=0){
        cout << 0 << "\n";
        return;
    }
    sum=sum/2;

    vector<ll> dp(sum+1, 0);
    dp[0]=1;

    for (ll i = 1; i < n; i++) {
        for (ll target = sum; target >= i; target--) {
            dp[target] = (dp[target] + dp[target-i])%INF;
        }
    }
    
    cout << dp[sum] << "\n";

}
 
 
int main() {
    ll t;
    //cin >> t;
    t=1;
    while(t--){
        solve();
    }
 
    return 0;
}