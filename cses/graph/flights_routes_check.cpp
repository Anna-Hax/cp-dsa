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

void dfs(ll node, vector<vector<ll>>& adj, vector<ll>& vis, stack<ll>& st){
    vis[node]=1;
    for(auto& adjnode: adj[node]){
        if(!vis[adjnode]){
            dfs(adjnode, adj, vis, st);
        }
    }
    st.push(node);
}

void dfsrev(ll node, vector<vector<ll>>& adj, vector<ll>& vis){
    vis[node]=1;
    for(auto& adjnode: adj[node]){
        if(!vis[adjnode]){
            dfsrev(adjnode, adj, vis);
        }
    }
}

void solve() {
    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> adj(n + 1);
    vector<vector<ll>> adjrev(n + 1);
    ll a, b;
    for(ll i = 0; i < m; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adjrev[b].push_back(a);
    }

    vector<ll> vis(n+1, 0);
    stack<ll> timer;
    for(ll i=1; i<=n; i++){
        if(!vis[i]){
            dfs(i, adj, vis, timer);
        }
    }

    vector<ll> visrev(n+1, 0);
    ll ans=0;
    vector<ll> result;
    while(!timer.empty()){
        ll node = timer.top();
        timer.pop();
        if(!visrev[node]){
            result.push_back(node);
            dfsrev(node, adjrev, visrev);
            ans+=1;
        }
    }

    if(ans>1){
        cout << "NO" << "\n";
        cout << result[1] << " " << result[0] << "\n";
    } else {
        cout << "YES" << "\n"; 
    }

}

int main() {
    fastio
    ll tc = 1; 
    while (tc--) {
        solve();
    }
    return 0;
}