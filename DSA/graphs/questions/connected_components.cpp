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

        
    }
};

int main() {
    vector<vector<int>> edges={{0,1},{1,2}};
    int v = 4;
    Solution solver;

    int result = solver.edgefunction(v, edges);
    cout << result << endl;

    return 0;
}