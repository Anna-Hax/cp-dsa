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
#include <cmath>
#include <set>


void get_dist(int u, int p, int d, vector<vector<int>>& adj, vector<int>& dist) {
    dist[u] = d;
    for (int v : adj[u]) {
        if (v != p) {
            get_dist(v, u, d + 1, adj, dist);
        }
    }
}

void solve() {
    int n;
    cin >> n;
    if (n == 1){
        cout << 0 << "\n"; 
        return;
    }

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> dist(n + 1, 0);
    get_dist(1, 0, 0, adj, dist);
    int A = 1;
    for (int i = 1; i <= n; i++){
        if (dist[i] > dist[A]){
            A = i;
        } 
    }

    vector<int> distA(n + 1, 0);
    get_dist(A, 0, 0, adj, distA);
    int B = A;
    for (int i = 1; i <= n; i++) {
        if (distA[i] > distA[B]){
            B = i;
        } 
    }

    vector<int> distB(n + 1, 0);
    get_dist(B, 0, 0, adj, distB);

    for (int i = 1; i <= n; i++) {
        cout << max(distA[i], distB[i]) << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
    return 0;
}