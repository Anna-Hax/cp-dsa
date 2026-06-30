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
    string s1, s2;
    cin >> s1 >> s2;

    ll n = s1.size();
    ll m = s2.size();

    vector<vector<ll>> dp(n+1, vector<ll>(m+1, 0));

    for(ll i = 0; i <= n; i++) dp[i][0] = i; 
    for(ll j = 0; j <= m; j++) dp[0][j] = j;

    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=m; j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = dp[i-1][j-1]; 
            } else {
                dp[i][j] = 1 + min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});
            }
        }
    }    
    
    cout << dp[n][m] << "\n";
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