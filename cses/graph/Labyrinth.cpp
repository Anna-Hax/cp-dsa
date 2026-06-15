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
            }
            if(c=='A'||c=='B'){
                grid[i][j]=-1;
            }
            if(c=='A'){
                start={i, j};
            }
        }
    }

    //can walk on 1, can't on 0, start point is -1 and end point is -1;

    queue<pair<int, int>> q;
    q.push(start);
    vector<vector<ll>> vis(n, vector<ll>(m, 0));
    vis[start.first][start.second]=1;
    vector<vector<char>> parent_dir(n, vector<char>(m, 0));

    vector<int> dx = {1, -1, 0, 0};
    vector<int> dy = {0, 0, 1, -1};
    //cout << start.first << "jw" << start.second << "\n";
    while(!q.empty()){
        ll x = q.front().first;
        ll y = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int new_x = dx[i]+x;
            int new_y = dy[i]+y;
            if(new_x>=0 && new_y>=0 && new_x<n && new_y<m && grid[new_x][new_y]!=0){
                if(!vis[new_x][new_y]){
                  //  cout << new_x << "wjo" << new_y << "dkqd" << endl;
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
                    if(grid[new_x][new_y]==-1){
                        cout << "YES" << "\n";
                        string path = "";
                        int cx=new_x;
                        int cy = new_y;
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
                    
                    q.push({new_x, new_y});
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
