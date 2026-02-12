#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, k;
    if (!(cin >> n >> k)) return;

    string s;
    vector<string> s_vec(k, '');
    for(ll i = 0; i<k; i++){
        if (!(cin >> s)) return;
        s_vec[i]=s;
    }
    
    map<string, ll> mp;

    ll j = 0;
    ll count=0;
    
    


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}