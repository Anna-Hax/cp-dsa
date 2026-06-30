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

    vector<ll> heights(n, 0);
    for(ll i=0; i<n; i++){
        cin >> heights[i];
    }

    ll curr=1;
    ll ans=1;
    ll h=heights[0];
    ll i=1;
    while(i<n){
        if(heights[i]<h){
            curr+=1;
        } else {
            curr=1;
            h=heights[i];
            //i+=1;
        }
        ans=max(curr, ans);
        i+=1;
    }

    cout << ans << "\n";
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