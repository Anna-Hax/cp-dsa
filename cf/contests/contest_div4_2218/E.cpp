#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        
    }

    ll max_val=0;
    for(ll i=0; i<n ; i++){
        for(ll j=0; j<n; j++){
            if(i!=j){
                max_val=max(max_val, a[i]^a[j]);
            }
        }
    }
    cout << max_val << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}