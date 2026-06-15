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


void figureout(vector<vector<int>>& grid, vector<vector<int>>& monsters){
    queue<pair<int, pair<int, int>>> q;
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<ll>> vis(n, vector<ll>(m, 0));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j]==-1){
                q.push({0, {i, j}});
                vis[i][j]=1;
            }
        }
    }

    vector<int> dx = {1, -1, 0, 0};
    vector<int> dy = {0, 0, 1, -1};
    while(!q.empty()){
        int time = q.front().first;
        ll x = q.front().second.first;
        ll y = q.front().second.second;
        monsters[x][y]=min(time, monsters[x][y]);
        q.pop();
        for(int i=0; i<4; i++){
            int new_x = dx[i]+x;
            int new_y = dy[i]+y;
            if(new_x>=0 && new_y>=0 && new_x<n && new_y<m && grid[new_x][new_y]!=0){
                if(!vis[new_x][new_y]){
                    vis[new_x][new_y]=1;
                    q.push({time+1, {new_x, new_y}});
                }
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
    pair<int, int> start;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> c;
            if(c=='.'){
                grid[i][j]=1;
            } else if(c=='M'){
                grid[i][j]=-1;
            }else if(c=='A'){
                grid[i][j]=1;
                start={i, j};
            }
        }
    }

    if(start.first==0 || start.second==0 || start.first==n-1 || start.second==m-1){
        cout << "YES" << "\n";
        cout << 0 << "\n";
        return;
    }



    vector<vector<int>> monsters(n, vector<int>(m, 1e9));
    figureout(grid, monsters);

    queue<pair<int, pair<int, int>>> q;
    q.push({0, start});
    vector<vector<ll>> vis(n, vector<ll>(m, 0));
    vis[start.first][start.second]=1;
    vector<vector<char>> parent_dir(n, vector<char>(m, 0));

    vector<int> dx = {1, -1, 0, 0};
    vector<int> dy = {0, 0, 1, -1};
    while(!q.empty()){
        int time = q.front().first;
        ll x = q.front().second.first;
        ll y = q.front().second.second;
        q.pop();
        for(int i=0; i<4; i++){
            int new_x = dx[i]+x;
            int new_y = dy[i]+y;
            if(new_x>=0 && new_y>=0 && new_x<n && new_y<m && grid[new_x][new_y]!=0 && time+1 < monsters[new_x][new_y]){
                if(!vis[new_x][new_y]){
                    vis[new_x][new_y]=1;
                    if(dx[i]==1){
                        parent_dir[new_x][new_y] = 'D';
                    } else if (dx[i]==-1){
                        parent_dir[new_x][new_y] = 'U';
                    } else {
                        if(dy[i]==1){
                            parent_dir[new_x][new_y] = 'R';
                        } else if(dy[i]==-1) {
                            parent_dir[new_x][new_y] = 'L';
                        }
                    }
                    if(new_x==0 || new_y==0 || new_x==n-1 || new_y==m-1){
                        cout << "YES" << "\n";
                        string path = "";
                        int cx=new_x;
                        int cy= new_y;
                        while(cx!=start.first || cy!=start.second){
                            char d = parent_dir[cx][cy];
                            path+=d;
                            if(d=='D'){
                                cx--;
                            } else if (d == 'U'){
                                cx++;
                            } else if (d=='L'){
                                cy++;
                            } else {
                                cy--;
                            }
                        }
                        reverse(path.begin(), path.end());
                        cout << path.size() << "\n";
                        cout << path << "\n";
                        return;
                    }
                    
                    q.push({time+1, {new_x, new_y}});
                }
            }
        }
        
    }
    cout << "NO" << "\n";
    
}

int main() {
    fastio

    ll tc = 1; 

    while (tc--) {
        solve();
    }

    return 0;
}
