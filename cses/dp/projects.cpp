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
#define MP make_pair;
 
void solve(){
    ll n;
    cin >> n;
    
    vector<pair<ll, pair<ll, ll>>> arr(n);

    for(ll i=0; i<n; i++){
        ll l, r, p;
        cin >> l >> r >> p;
        arr[i]={l, {r, p}};
    }

    sort(arr.begin(), arr.end());

    vector<ll> dp(n+1, 0);
    dp[n]=0;
    for(ll i=n-1; i>=0; i--){
        ll ans= dp[i+1];
        ll nextval=arr[i].second.first;

        auto it = upper_bound(arr.begin(), arr.end(), make_pair(nextval, make_pair((ll)1e9, (ll)1e9)));
        ll index = it - arr.begin();

        ll price = arr[i].second.second;

        ans=max(ans, price+dp[index]);
        dp[i]=ans;

    }
    
    cout << dp[0] << "\n";
   
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