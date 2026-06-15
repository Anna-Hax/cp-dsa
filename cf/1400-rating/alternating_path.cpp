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
    if (!(cin >> n >> m)) return;

    vector<vector<ll>> adj(n);
    for (ll i = 0; i < m; i++) {
        ll u, v;
        cin >> u >> v;
        u--; v--; // Convert to 0-indexed
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<ll> color(n, -1);
    ll total_beautiful = 0;

    for(ll i=0; i<n; i++){
        if(color[i]==-1){
            color[i]=0;
            bool is_bipartite = true;
            ll count0 = 0, count1 = 0;
            queue<ll> q;
            q.push(i);
            while(!q.empty()){
                ll node = q.front();
                q.pop();
                if(color[node]==0){
                    count0+=1;
                } else {
                    count1+=1;
                }

                for(auto& v: adj[node]){
                    if(color[v]==-1){
                        color[v]=1-color[node];
                        q.push(v);
                    } else if(color[v]==color[node]){
                        is_bipartite=false;
                    }
                }
            }
            if(is_bipartite){
                total_beautiful+=max(count0, count1);
            }
        }
        
    }    
    cout << total_beautiful << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}