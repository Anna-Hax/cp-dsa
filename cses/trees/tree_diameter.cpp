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
ll maxDepth, farthestNode;
void dfs(ll node, ll parent, vector<vector<ll>>& adj, ll depth) {
    if(maxDepth<depth){
        farthestNode=node;
        maxDepth=depth;
    }

    for(auto& u: adj[node]){
        if(u!=parent && !vis[u]){
            vis[u];
            dfs(u, node, adj, depth+1);
        }
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
    maxDepth = -1;
    dfs(1, 0, adj, 0); 
    ll node1 = farthestNode;

    maxDepth = -1;
    dfs(node1, 0, adj, 0);
    cout << maxDepth << "\n";
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
