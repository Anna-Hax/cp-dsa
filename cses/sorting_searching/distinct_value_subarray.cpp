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
    for(ll i=0;i <n; i++){
        cin>>arr[i];
    }

    map<ll, ll> mp;
    ll i=0;
    ll count=0;
    ll maxcount=1;
    for (ll j = 0; j < n; j++) {
        
        while (mp[arr[j]] > 0) {
            mp[arr[i]]--;
            i++;
        }
        
        mp[arr[j]]++;
        count+=j-i+1;
        
    }

    cout << count << "\n";
}

int main() {
    fastio

    int tc = 1; 

    while (tc--) {
        solve();
    }

    return 0;
}
