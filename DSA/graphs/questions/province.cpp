#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void dfs(int v, vector<int> adj[], int visited[]) {
        
        visited[v] = 1;

        for (auto &at: adj[v]){
            if (!visited[at]){
                dfs(at, adj, visited);
            }
        }
        
    }

    int edgefunction(int v, vector<vector<int>>& adj) {

        vector<int> adjList[v];

        for (int i = 0; i < v; i++) {
            for (int j = 0; j < v; j++) {
                if (adj[i][j] == 1 && i != j) {
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }
        int vis[v] = {0};

        int count = 0;

        for(int m = 0; m<v; m++){
            if (!vis[m]){
                count +=1;
                dfs(m, adjList, vis);
            }
        }

        return count;
    }
};

int main() {
    vector<vector<int>> adj = {{1, 0, 0, 1}, {0, 1, 1, 0}, {0, 1, 1, 0}, {1, 0, 0, 1}};
    Solution solver;

    int result = solver.edgefunction(4, adj);
    cout << result << endl;

    return 0;
}