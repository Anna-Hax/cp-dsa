#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
#define fi first
#define se second

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LLINF = 1e18;
using namespace std;

void dfs(vector<vector<int>>& grid, vector<vector<ll>>& vis, int x, int y){
    vis[x][y]=1;
    int n = grid.size();
    int m = grid[0].size();
    vector<int> dx = {1, -1, 0, 0};
    vector<int> dy = {0, 0, 1, -1};

    for(int i=0; i<4; i++){
        int new_x= dx[i]+x;
        int new_y = dy[i]+y;
        if(new_x>=0 && new_y>=0 && new_x<n && new_y<m && grid[new_x][new_y]==1){
            if(!vis[new_x][new_y]){
                dfs(grid, vis, new_x, new_y);
            }
        }
    }
}

void solve() {
    ll n;
    cin >> n;
    ll m;
    cin >> m;
    
    vector<vector<int>> grid(n, vector<int>(m, 0));
    char c;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> c;
            if(c=='.'){
                grid[i][j]=1;
            }
        }
    }

    ll count=0;
    vector<vector<ll>> vis(n, vector<ll>(m, 0));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j]==1){
                if(!vis[i][j]){
                    count+=1;
                    dfs(grid, vis, i, j);
                }
            }
        }
    }

    cout << count << "\n";

}

int main() {
    fastio

    ll tc = 1; 

    while (tc--) {
        solve();
    }

    return 0;
}
