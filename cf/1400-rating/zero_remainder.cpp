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


ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, k;
    cin >> n >> k;
    
    map<ll, ll> rem_counts;
    
    for(ll i = 0; i < n; i++){
        ll temp;
        cin >> temp;
        ll rem = temp % k;
        if (rem != 0) {
            ll needed = k - rem; 
            rem_counts[needed]++;
        }
    }

    if (rem_counts.empty()) {
        cout << 0 << "\n";
        return;
    }

    ll max_steps = 0;

    for (auto const& [needed, count] : rem_counts) {
        ll total_steps_for_this_rem = needed + (count - 1) * k + 1;
        max_steps = max(max_steps, total_steps_for_this_rem);
    }

    cout << max_steps << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

