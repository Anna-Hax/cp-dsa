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

void solve() {
    
    ll n;
    cin >> n;
    vector<ll> arr(n, 0);
    for(ll i=0; i<n; i++){
        cin >> arr[i];
        
    }
    

    ll curr_minm = arr[n-1];
    ll ans=0;
    ll maxm=0;
    ll curr=0;
    for(ll i=n-2; i>=0; i--){
        if(arr[i]<curr_minm){
            curr_minm=arr[i];
            curr=0;
        } else {
            ans+=(arr[i]-curr_minm);
            curr+=1;
        }
        maxm=max(maxm, curr);
    }
    
    cout << ans+maxm << "\n";

}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}