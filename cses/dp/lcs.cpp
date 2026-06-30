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
    ll n, m;
    cin >> n >> m;
    vector<ll> arr1(n, 0);
    vector<ll> arr2(m, 0);

    for(ll i=0; i<n; i++){
        cin >> arr1[i];
    }
    for(ll i=0; i<m; i++){
        cin >> arr2[i];
    }

    vector<vector<ll>> dp(n+1, vector<ll>(m+1, 0));

    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=m; j++){
            if(arr1[i-1] == arr2[j-1]){
                dp[i][j] = 1+dp[i-1][j-1]; 
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }   
    ll j=m;
    ll i=n;
    vector<ll> result;
    while(j>0 && i>0){
        if(dp[i][j]==max(dp[i-1][j], dp[i][j-1])){
            if(dp[i][j]==dp[i][j-1]){
                j--;
            } else{
                i--;
            }
        } else{
            result.push_back(arr1[i-1]);
            i--;
            j--;
        }
    }

    //while(j>0){
    //    result.push_back(arr2[j-1]);
    //    j--;
    //}
    //while(i>0){
    //    result.push_back(arr1[i-1]);
    //    i--;
    //}

    cout << result.size() << "\n";

    for(ll i=result.size()-1; i>=0; i--){
        cout << result[i] << " ";
    }
    cout << "\n";
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