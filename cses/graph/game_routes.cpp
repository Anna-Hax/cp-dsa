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


void dfs(ll node, vector<vector<ll>>& adj, vector<ll>& dp, ll n, vector<ll>& vis){
    vis[node]=1;
    for(auto& adjnode: adj[node]){
        if(!vis[adjnode]){
            dfs(adjnode, adj, dp, n, vis);
        } 
        dp[node]=(dp[node]+dp[adjnode])%INF;
        
    }
}

void solve() {
    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> adj(n + 1);

    for (ll i = 0; i < m; i++) {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    vector<ll> dp(n+1, 0);
    dp[n]=1;
    vector<ll> vis(n+1, 0);
    dfs(1, adj, dp, n, vis);
    cout << dp[1]%INF << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}