#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define vl vector<ll>
using namespace std;

const ll LLINF = 1e18;

struct Edge {
    ll a, b, c;
};

void solve() {
    ll n, m;
    cin >> n >> m;

    vector<Edge> edges(m);
    for (ll i = 0; i < m; i++) {
        cin >> edges[i].a >> edges[i].b >> edges[i].c;
    }

    vl dist(n + 1, 0);
    vl parent(n + 1, -1);
    ll x = -1;

    for (ll i = 1; i <= n; i++) {
        x = -1;
        for (auto &e : edges) {
          
            if (dist[e.b] > dist[e.a] + e.c) {
                dist[e.b] = dist[e.a] + e.c;
                parent[e.b] = e.a;
                x = e.b;
            }
        }
    }

    if (x == -1) {
        cout << "NO\n";
    } else {
        cout << "YES\n";

        for (ll i = 1; i <= n; i++) {
            x = parent[x];
        }

        vl cycle;
        ll curr = x;
        while (true) {
            cycle.push_back(curr);
            if (curr == x && cycle.size() > 1) {
                break;
            }
            curr = parent[curr];
        }

        reverse(cycle.begin(), cycle.end());

        for (ll i = 0; i < cycle.size(); i++) {
            cout << cycle[i] << (i == cycle.size() - 1 ? "" : " ");
        }
        cout << "\n";
    }
}

int main() {
    fastio
    ll tc = 1;
    while (tc--) {
        solve();
    }
    return 0;
}