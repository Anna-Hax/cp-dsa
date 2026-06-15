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

struct State {
    ll dist;
    ll node;
    int used; 
    
    bool operator>(const State& other) const {
        return dist > other.dist;
    }
};

void solve() {
    ll n, m;
    cin >> n >> m;

    vector<vector<pair<ll, ll>>> adj(n + 1);
    ll a, b, c;
    for(ll i = 0; i < m; i++){
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
    }

    vector<vector<ll>> result(n + 1, vector<ll>(2, LLINF));
    vector<vector<int>> vis(n + 1, vector<int>(2, 0));
    
    priority_queue<State, vector<State>, greater<State>> pq;
    
    result[1][0] = 0;
    result[1][1] = 0;
    pq.push({0, 1, 0});

    while(!pq.empty()){
        State curr = pq.top();
        pq.pop();
        
        ll node = curr.node;
        ll dist = curr.dist;
        int used = curr.used;
        
        if(vis[node][used]) continue;
        vis[node][used] = 1;
        
        for(auto &ad: adj[node]){
            ll adjnode = ad.first;
            ll weight = ad.second;
            
            if (result[adjnode][used] > dist + weight) {
                result[adjnode][used] = dist + weight;
                pq.push({result[adjnode][used], adjnode, used});
            }
            
            if (used == 0) {
                if (result[adjnode][1] > dist + (weight / 2)) {
                    result[adjnode][1] = dist + (weight / 2);
                    pq.push({result[adjnode][1], adjnode, 1});
                }
            }
        }
    }

    cout << result[n][1] << "\n";
}

int main() {
    fastio
    ll tc = 1; 
    while (tc--) {
        solve();
    }
    return 0;
}