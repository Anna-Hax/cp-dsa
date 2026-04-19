#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

const int MAXN = 200005;
vector<int> adj[MAXN];
int pos[MAXN];
int a[MAXN];
bool visited[MAXN];

bool compare(int u, int v) {
    return pos[u] < pos[v];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pos[a[i]] = i;
    }

    for (int i = 1; i <= n; i++) {
        sort(adj[i].begin(), adj[i].end(), compare);
    }

    vector<int> bfs_order;
    queue<int> q;
    
    q.push(1);
    visited[1] = true;

    while (!q.empty()) {
        int v = q.front();
        q.pop();
        bfs_order.push_back(v);

        for (int u : adj[v]) {
            if (!visited[u]) {
                visited[u] = true;
                q.push(u);
            }
        }
    }

    bool match = true;
    for (int i = 0; i < n; i++) {
        if (bfs_order[i] != a[i]) {
            match = false;
            break;
        }
    }

    if (match) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}