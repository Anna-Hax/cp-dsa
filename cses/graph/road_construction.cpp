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

class DisJointSet{
    public:
    vector<ll> parent;
    vector<ll> size;
    DisJointSet(ll n){
        parent.resize(n+1);
        size.resize(n+1, 1);
        for(ll i=0; i<=n; i++){
            parent[i]=i;
        }
    }

    ll ultparent(ll u){
        if(parent[u]==u){
            return u;
        }
        return parent[u]=ultparent(parent[u]);
    }

    void unionBySize(ll u, ll v) {
        ll pu = ultparent(u);
        ll pv = ultparent(v);
        if (pu == pv) return;

        if (size[pu] < size[pv]) {
            parent[pu] = pv;
            size[pv] += size[pu];
        } else {
            parent[pv] = pu;
            size[pu] += size[pv];
        }
    }

    ll getsize(ll u){
        ll pu = ultparent(u);
        return size[pu];
    }
};

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> edges(m);
    for(ll i=0; i<m; i++){
        cin >> edges[i].first;
        cin >> edges[i].second;
    }
    DisJointSet dsj(n);

    ll count=n;

    ll maxm=0;

    for(ll i=0; i<m; i++){
        ll u = edges[i].first;
        ll v = edges[i].second;

        if(dsj.ultparent(u)!=dsj.ultparent(v)){
            dsj.unionBySize(u, v);
            count-=1;
        }

        maxm=max(maxm, dsj.getsize(u));

        cout << count << " " << maxm << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}