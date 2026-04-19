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

void solve() {
    ll n;
    cin >> n;
    vector<ll> xs(n, 0);
    vector<ll> ys(n, 0);
    ll temp;
    for(ll i=0; i<n; i++){
        cin >> temp;
        xs[i]=temp;
        cin >> temp;
        ys[i]=temp;
    }

    sort(xs.begin(), xs.end());
    sort(ys.begin(), ys.end());

    if(n%2==0){
        ll x_count=xs[n/2]-xs[(n/2)-1]+1;
        ll y_count=ys[n/2]-ys[(n/2)-1]+1;
        cout << x_count*y_count << endl;
    } else {
        cout << 1 << endl;
    }

    
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