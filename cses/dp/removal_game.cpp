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
    vector<ll> a(n, 0);
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }

    vector<ll> dp(n);
    ll sum = 0;
    for (int i = n - 1; i >= 0; i--) {
        sum += a[i]; 
        for (int j = i; j < n; j++) {
            if (i == j) {
                dp[j] = a[i];
            } else {
                dp[j] = max(a[i] - dp[j], a[j] - dp[j - 1]);
            }
        }
    }

    cout << (sum + dp[n - 1])/2 << "\n";
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