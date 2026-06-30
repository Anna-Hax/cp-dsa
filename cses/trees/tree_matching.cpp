// By Auchenai01
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
const ll MOD = 998244353;
const ll MAXX = 1e16;
const ll INF = 1e9 + 7;
const ll LLINF = 1e18;

vector<ll> vis;
void dfs(ll node, ll parent, vector<vector<ll>>& adj, ll& result) {
    for (auto &child : adj[node]) {
        if (child != parent) {
            dfs(child, node, adj, result);
            
        }
    }
    if(parent!=-1 && !vis[node] && !vis[parent]){
        vis[node]=vis[parent]=1;
        result+=1;
    }
}

void solve() {
    ll n;
    cin >> n;
    vector<vector<ll>> adj(n+1);
    vis.resize(n+1, 0);
    for(ll i=0; i<n-1; i++){
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll result=0;
    dfs(1, -1, adj, result);

    cout << result << "\n";
}

int main() {
    fastio

    int tc = 1; // Number of test cases
    // cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}
