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

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

bool bincheck(vector<ll> &x, ll mid, ll n, ll m, vector<pair<ll, ll>> &arr){

    vector<ll> a(n, 0);
    for(ll i=0; i<=mid; i++){
        a[x[i]]=1;
    }

    vector<ll> prefix_sum(n, 0);
    prefix_sum[0]=a[0];
    for(ll i=1; i<n; i++){
        prefix_sum[i]=prefix_sum[i-1]+a[i];
    }

    for(ll i=0; i<m; i++){
        ll l = arr[i].first;
        ll r = arr[i].second;

        if(prefix_sum[r]-prefix_sum[l]+a[l] > (r-l+1)/2){
            return true;
        }
    }
    return false;
}

void solve() {
    ll n;
    cin >> n;

    ll m;
    cin >> m;

    vector<pair<ll, ll>> arr(m);
    ll temp;
    for(ll i=0; i<m; i++){
        cin >> temp;
        arr[i].first=temp-1;
        cin >> temp;
        arr[i].second=temp-1;
    }

    ll q;
    cin >> q;

    vector<ll> x(q, 0);
    for(ll i=0; i<q; i++){
        cin >> temp;
        x[i]=temp-1;
    }

    ll left=0;
    ll right=q-1;
    ll mid;
    ll ans=INT_MAX;
    while(left<=right){
        mid=(left+right)/2;
        if(bincheck(x, mid, n, m, arr)){
            ans=min(ans, mid);
            right=mid-1;
        } else {
            left=mid+1;
        }
    }

    if(ans==INT_MAX){
        cout << -1 << endl;
        return;
    } else {
        cout << ans+1 << endl;
    }
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