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
    int n;
    cin >> n;

    vector<int> telepath(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> telepath[i];
    }

    vector<int> dp(n + 1, 0);
    vector<int> vis(n + 1, 0); 
    vector<int> step_count(n + 1, 0); 

    for (int i = 1; i <= n; i++) {
        if (vis[i] == 0) {
            vector<int> current_path;
            int curr = i;
            int steps = 0;

            while (vis[curr] == 0) {
                vis[curr] = 1; 
                step_count[curr] = steps++;
                current_path.push_back(curr);
                curr = telepath[curr];
            }

            if (vis[curr] == 1) {
                int cycle_size = steps - step_count[curr];
                
                while (!current_path.empty()) {
                    int node = current_path.back();
                    current_path.pop_back();
                    vis[node] = 2; 
                    dp[node] = cycle_size;
                    
                    if (node == curr) {
                        break;
                    }
                }
            }

            while (!current_path.empty()) {
                int node = current_path.back();
                current_path.pop_back();
                vis[node] = 2;
                dp[node] = dp[telepath[node]] + 1;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << dp[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}