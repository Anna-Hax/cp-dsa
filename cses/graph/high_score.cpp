#include <bits/stdc++.h>
 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
 
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LLINF = 1e18;
using namespace std;


void dfs(ll node, vector<bool>& visited, vector<vector<ll>>& adj) {
    visited[node] = true;
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, visited, adj);
        }
    }
}

 
void solve() {
    ll n;
    cin >> n;
    ll m;
    cin >> m;
 
    vector<pair<pair<ll, ll>, ll>> edges;
    vector<vector<ll>> forward_adj(n+1);
    vector<vector<ll>> reverse_adj(n+1);
    ll a, b, c;
    for(ll i=0; i<m; i++){
        cin >> a >> b >> c;
        edges.push_back({{a, b}, c});
        forward_adj[a].pb(b);
        reverse_adj[b].pb(a);
    }

    vector<bool> visited_forward(n+1, false);
    vector<bool> visited_reverse(n+1, false);
    dfs(1, visited_forward, forward_adj);
    dfs(n, visited_reverse, reverse_adj);
 
    vector<ll> result(n+1, -LLINF);
    result[1]=0;
 
    for(ll i=1; i<n; i++){
        for(auto &edge: edges){
            ll u = edge.first.first;
            ll v= edge.first.second;
            ll weight = edge.second;
 
            if(result[u] != -LLINF && result[u]+weight>result[v]){
                result[v]=result[u]+weight;
            }
        }
    }
 
   
    for(auto &edge: edges){
        ll u = edge.first.first;
        ll v= edge.first.second;
        ll weight = edge.second;
        if(result[u] != -LLINF && result[u]+weight>result[v]){
            if(visited_forward[v] && visited_reverse[v]){
                cout << -1 << "\n";
                return;
            }
        }
    }
    
    cout << result[n] << "\n";
}
 
int main() {
    fastio
 
    ll tc = 1; 
 
    while (tc--) {
        solve();
    }
 
    return 0;
}