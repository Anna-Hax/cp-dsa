#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int dr[] = {-1, 1, 0, 0};
int dc[] = {0, 0, -1, 1};
char stepDir[] = {'U', 'D', 'L', 'R'};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<string> grid(n);
    pair<int, int> start, end;

    for (int i = 0; i < n; i++) {
        cin >> grid[i];
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'A') start = {i, j};
            if (grid[i][j] == 'B') end = {i, j};
        }
    }

    vector<vector<int>> parentDir(n, vector<int>(m, -1));
    queue<pair<int, int>> q;

    q.push(start);
    parentDir[start.first][start.second] = 9; 

    bool found = false;
    while (!q.empty()) {
        pair<int, int> curr = q.front();
        q.pop();

        if (curr == end) {
            found = true;
            break;
        }

        for (int i = 0; i < 4; i++) {
            int nr = curr.first + dr[i];
            int nc = curr.second + dc[i];

            if (nr >= 0 && nr < n && nc >= 0 && nc < m && grid[nr][nc] != '#' && parentDir[nr][nc] == -1) {
                parentDir[nr][nc] = i;
                q.push({nr, nc});
            }
        }
    }

    if (found) {
        cout << "YES" << "\n";
        string path = "";
        pair<int, int> curr = end;

        // Backtrack from end to start
        while (curr != start) {
            int d = parentDir[curr.first][curr.second];
            path += stepDir[d];
            curr.first -= dr[d];
            curr.second -= dc[d];
        }
        reverse(path.begin(), path.end());
        
        cout << path.length() << "\n";
        cout << path << "\n";
    } else {
        cout << "NO" << "\n";
    }

    return 0;
}