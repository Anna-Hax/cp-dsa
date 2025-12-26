#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the maximum number of content students
    int edgefunction(int v, vector<vector<int>>& edges) {

        int count = 0;
        vector<int> visited(v, 0);
        
        for (int i = 0; i < edges.size(); i++){
            if (!visited[edges[i][0]] && !visited[edges[i][1]]){
                visited[edges[i][0]] = 1;
                visited[edges[i][1]] = 1;
                count+=1;
            } else if (!visited[edges[i][0]]){
                visited[edges[i][0]] = 1;
            } else if (!visited[edges[i][1]]){
                visited[edges[i][1]] = 1;
            }   
        }

        for (int i = 0; i < v; i++){
            if (!visited[i]){
                count+=1;
            }
        }
        return count;
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