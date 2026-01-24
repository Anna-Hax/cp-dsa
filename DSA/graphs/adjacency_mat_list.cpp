#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the maximum number of content students
    int edgefunction(int v, vector<vector<int>>& edges) {

        int matrix[v][v] = {0};

        for (auto &at : edges) {
            matrix[at[0]][at[1]] = 1;
            matrix[at[1]][at[0]] = 1;
        }

        vector<int> adj[v];

        for (auto &at : edges) {
            adj[at[0]].push_back(at[1]);
            adj[at[1]].push_back(at[0]);
        }

        return 0;
    }
};

int main() {
    vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 3}, {4, 5}};
    int v = 7;
    // Create Solution object
    Solution solver;

    // Get the number of content students and print it
    int result = solver.edgefunction(v, edges);
    cout << "Maximum number of content students: " << result << endl;

    return 0;
}