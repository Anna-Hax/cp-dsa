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


void dfs(ll node, vector<vector<ll>>& adj, vector<ll>& vis, vector<ll>& parent, vector<ll>& dist){
    vis[node]=1;
    for(auto &adjnode: adj[node]){
        if (vis[adjnode] == 0) {
            parent[adjnode]=node;
            dist[adjnode]=dist[node]+1;
            dfs(adjnode, adj, vis, parent, dist);
        } else {
            if(dist[node]+1>dist[adjnode]){
                dist[adjnode]=dist[node]+1;
                parent[adjnode]=node;
            }
        }
    }
}

void solve() {
    ll n, m;
    if (!(cin >> n >> m)) return;

    vector<vector<ll>> adj(n + 1);
    vector<ll> vis(n+1, 0);
    vector<ll> dist(n+1, 0);
    vector<ll> parent(n+1, -1);

    for (ll i = 0; i < m; i++) {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    parent[1]=1;

    dfs(1, adj, vis, parent, dist);
    vector<ll> result;
    ll curr = n;
    while(parent[curr]!=curr && parent[curr]!=-1){
        result.push_back(curr);
        curr = parent[curr];
    }
    if(parent[curr]==-1){
        cout << "IMPOSSIBLE\n";
        return;
    }
    result.push_back(1);
    reverse(result.begin(), result.end());
    cout << result.size() << "\n";
    for(ll i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}