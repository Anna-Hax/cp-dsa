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
vector<vector<ll>> result;
void dfs(ll node, ll parent, vector<vector<ll>>& adj, vector<ll>& parents) {
    result[node]=parents;
    parents.push_back(node);
    for (auto &child : adj[node]) {
        if (child != parent) {
            dfs(child, node, adj, parents);
        }
    }
    parents.pop_back();
}

void solve() {
    ll n, q;
    cin >> n >> q;
    vector<vector<ll>> adj(n+1);
    vector<ll> subordinates(n+1);

    for (int i = 2; i <= n; ++i) {
        int manager;
        cin >> manager;
        adj[manager].push_back(i);
    }
    result.resize(n+1);
    vector<ll> parents;
    dfs(1, 0, adj, parents);

    for(ll i=0; i<q; i++){
        ll node, k;
        cin >> node >> k;
        vector<ll> temp = result[node];
        if(k>temp.size()){
            cout << -1 << "\n";
        } else {
            cout << temp[temp.size()-k] << "\n";
        }
    }

}

int main() {
    fastio

    int tc = 1; // Number of test cases
    // cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}
