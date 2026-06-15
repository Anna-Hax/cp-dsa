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

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);



void solve() {
    ll V;
    cin >> V;
    ll m;
    cin >> m;
    ll n1, n2, n3;
    vector<vector<ll>> adjlist(V+1);
    vector<vector<ll>> adjweight(V+1);
    for(ll i=0; i<m; i++){
        cin >> n1 >> n2 >> n3;
        adjlist[n1].push_back(n2);
        adjweight[n1].push_back(n3);
    }
    
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
    q.push({0, 1});
    vector<ll> result(V+1, 1e16);
    result[1]=0;
    while(!q.empty()){
        ll dist = q.top().first;
        ll node = q.top().second;
        q.pop();
        if (dist > result[node]) continue;
        for(ll i=0; i<adjlist[node].size(); i++){
            ll wt = adjweight[node][i];
            ll adj = adjlist[node][i];
            if(result[adj]>result[node]+wt){
                result[adj]=result[node]+wt;
                q.push({result[adj], adj});
            }
        }
    }

    for(ll i=1; i<=V; i++){
        cout << result[i] << " ";
    }
    cout << "\n";
    
}

int main() {
    fastio

    ll tc = 1; 

    while (tc--) {
        solve();
    }

    return 0;
}
