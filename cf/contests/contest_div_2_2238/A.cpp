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
#include <cmath>
#include <set>

void solve(){
    ll n, c;
    cin >> n >> c;
    vector<ll> a(n, 0);
    vector<ll> b(n, 0);
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    for(ll i=0; i<n; i++){
        cin >> b[i];
    }

    vector<ll> a_copy = a;
    sort(a.begin(), a.end());

    vector<ll> b_copy=b;
    sort(b.begin(), b.end());

    ll ans1=0;
    ll ans2=0;
    for(ll i=0; i<n; i++){
        if(b[i]>a[i]){
            cout << -1 << "\n";
            return;
        } else {
            ans1+=(a[i]-b[i]);
        }
    }
    for(ll i=0; i<n; i++){
        if(b_copy[i]>a_copy[i]){
            ans2=-1;
            break;
        } else {
            ans2+=(a_copy[i]-b_copy[i]);
        }
    }

    if(ans2==-1){
        cout << ans1+c << "\n";
    } else {
        cout << min(ans1+c, ans2) << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        solve();
    }
    return 0;
}