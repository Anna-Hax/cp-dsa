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


void solve() {
    ll n, m;
    cin >> n >> m;

    vector<vector<pair<ll, ll>>> adj(n + 1);
    ll a, b, c;
    for(ll i = 0; i < m; i++){
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }
    ll V = n;
    ll ans =0;
    vector<ll> vis(n+1, 0);
    for(ll i=1; i<=n; i++){
        if(!vis[i]){
            ans+=1;
            queue<ll> q;
            q.push(i);
            vis[i]=1;

            while(!q.empty()){
                ll node = q.front();
                q.pop();
                for(auto& [adjnode, w]: adj[node]){
                    if(!vis[adjnode]){
                        vis[adjnode]=1;
                        q.push(adjnode);
                    }
                }
            }
        }
    }

    if(ans>1){
        cout << "IMPOSSIBLE" << "\n";
        return;
    }

    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
    q.push({0, 1}); //weight, node
    ll weight=0;
    vector<ll> visited(V+1, 0);
    
    while(!q.empty()){
        ll w = q.top().first;
        ll node = q.top().second;
        q.pop();
        if(visited[node]){
            continue;
        } 
        weight+=w;
        visited[node]=1;
        
        for(auto& i: adj[node]){
            ll adjNode=i.first;
            ll edgeWeight=i.second;
            if (!visited[adjNode]) {
                q.push({edgeWeight, adjNode});
            }
        }
        
    }
    cout << weight;

    
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}