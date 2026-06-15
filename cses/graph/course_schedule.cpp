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

ll cycle_start = -1, cycle_end = -1;

bool dfs(ll node, vector<vector<ll>>& adj, vector<ll>& vis, vector<ll>& parent){
    vis[node]=1;
    for(auto &adjnode: adj[node]){
        if (vis[adjnode] == 0) {
            parent[adjnode] = node;
            if (dfs(adjnode, adj, vis, parent)){
                return true;
            } 
        } else if(vis[adjnode]==1){
            cycle_end=node;
            cycle_start=adjnode;
            return true;
        }
    }
    vis[node]=2;
    return false;
}

void solve() {
    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> adj(n + 1);
    vector<ll> indegree(n+1, 0);

    for (ll i = 0; i < m; i++) {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        indegree[v]+=1;
    }

    queue<ll> q;
    for(ll i=1; i<=n; i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }

    vector<ll> result;
    
    while(!q.empty()){
        ll node = q.front();
        q.pop();
        result.push_back(node);

        for(auto &adjnode: adj[node]){
            indegree[adjnode]-=1;
            if(indegree[adjnode]==0){
                q.push(adjnode);
            }
        }
    }

    if(result.size()<n){
        cout << "IMPOSSIBLE";
    } else {
        for(ll i=0; i<n; i++){
            cout << result[i] << " ";
        }
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}