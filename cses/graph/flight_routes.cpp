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


void solve(){
    ll n, m, k;
    cin >> n >> m >> k;

    vector<vector<pair<ll, ll>>> adj(n + 1);

    for (ll i = 0; i < m; i++) {
        ll u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w}); 
    }
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;

    priority_queue<ll> dist[n+1];

    ll source = 1;
    dist[source].push(0);
    pq.push({0, source});
    while (!pq.empty()) {
        ll d = pq.top().first;
        ll u = pq.top().second;
        pq.pop();
        
        if (d > dist[u].top()){
            continue;
        } 
        for (auto edge : adj[u]) {
            ll v = edge.first;
            ll weight = edge.second;
            
            if (dist[v].size() < k) {
                dist[v].push(d+weight);
                pq.push({d+weight, v});
            } else if (d+weight < dist[v].top()){
                dist[v].push(d+weight);
                while (dist[v].size() > k){
                    dist[v].pop();
                } 
                pq.push({d+weight, v});
            }
            
        }
    }
        
    vector<ll> result;
    while (dist[n].size()) {
        result.push_back(dist[n].top());
        dist[n].pop();
    }

    for(ll i=k-1; i>=0; i--){
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