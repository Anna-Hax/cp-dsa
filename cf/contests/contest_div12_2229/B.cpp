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

void solve() {
    
    ll n;
    cin >> n;
    vector<ll> arr_a(n, 0);
    vector<ll> arr_b(n, 0);

    ll temp;
    for(ll i=0; i<n; i++){
        cin >> temp;
        arr_a[i]=temp;
    }
    for(ll i=0; i<n; i++){
        cin >> temp;
        arr_b[i]=temp;
    }

    ll ans=0;

    for(ll i=0; i<n; i++){
        ans+=max(arr_a[i], arr_b[i]);
        arr_a[i]=min(arr_a[i], arr_b[i]);
    }
    ans+=*max_element(arr_a.begin(), arr_a.end());
    cout << ans << "\n";
    return;
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