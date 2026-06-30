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
    vector<ll> arr(n, 0);
    for(ll i=0; i<n; i++){
        cin >> arr[i];
    }

    set<ll> possible;
    possible.insert(0);

    for(auto& coin: arr){
        vector<ll> sums;
        for(auto &sum: possible){
            sums.push_back(sum+coin);
        }
        for(auto &sum: sums){
            possible.insert(sum);
        }
    }
    
    cout << possible.size()-1 << "\n";
    for (int sum: possible) {
        if (sum != 0) {
            cout << sum << " ";
        }
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