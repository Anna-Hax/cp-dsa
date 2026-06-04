#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
#define fi first
#define se second

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LLINF = 1e18;
using namespace std;


void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n, 0);
    map<ll, ll> mp;
    for(ll i=0;i <n; i++){
        cin>>arr[i];
        mp[arr[i]]+=1;
    }
    ll ans=1;
    for(auto& [key, value]: mp){
        ans=(ans*(value+1))%MOD;
    }

    cout << (ans-1)%MOD << "\n";
    
}

int main() {
    fastio

    int tc = 1; 

    while (tc--) {
        solve();
    }

    return 0;
}
