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

void dfs(ll node, ll parent, vector<vector<ll>>& adj, vector<ll>& subordinates) {
    subordinates[node] = 1;
    for (auto &child : adj[node]) {
        if (child != parent) {
            dfs(child, node, adj, subordinates);
            subordinates[node] += subordinates[child];
        }
    }
}

void solve() {
    ll n;
    cin >> n;
    vector<vector<ll>> adj(n+1);
    vector<ll> subordinates(n+1);

    for (int i = 2; i <= n; ++i) {
        int manager;
        cin >> manager;
        adj[manager].push_back(i);
    }

    dfs(1, 0, adj, subordinates);

    for (ll i = 1; i <= n; ++i) {
        cout << subordinates[i] - 1 << " ";
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
