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

int V, m;
vector<vector<int>> adjlist;
vector<bool> vis;
vector<int> parent_node;
int cycle_start = -1, cycle_end = -1;

bool dfs(int num, int p) {
    vis[num] = true;
    for (auto &nbr : adjlist[num]) {
        if (nbr == p) continue; 
        
        if (vis[nbr]) {
            cycle_start = nbr;
            cycle_end = num;
            return true;
        }
        
        parent_node[nbr] = num;
        if (dfs(nbr, num)) return true;
    }
    return false;
}

void solve() {
    cin >> V >> m;
    
    adjlist.assign(V + 1, vector<int>());
    vis.assign(V + 1, false);
    parent_node.assign(V + 1, -1);

    for (int i = 0; i < m; i++) {
        int n1, n2;
        cin >> n1 >> n2;
        adjlist[n1].push_back(n2);
        adjlist[n2].push_back(n1);
    }

    for (int i = 1; i <= V; i++) {
        if (!vis[i]) {
            if (dfs(i, -1)) {
                vector<int> cycle;
                int temp = cycle_end;
                
                while (temp != cycle_start) {
                    cycle.push_back(temp);
                    temp = parent_node[temp];
                }
                cycle.push_back(cycle_start);
                
                reverse(cycle.begin(), cycle.end());
                
                cycle.push_back(cycle_start);

                cout << cycle.size() << "\n";
                for (int node : cycle) {
                    cout << node << " ";
                }
                cout << "\n";
                return;
            }
        }
    }

    cout << "IMPOSSIBLE\n";
}

int main() {
    fastio
    solve();
    return 0;
}