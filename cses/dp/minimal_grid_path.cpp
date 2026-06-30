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

 
void solve(){
    ll n;
    cin >> n;
    vector<vector<char>> grid(n, vector<char>(n));

    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            cin >> grid[i][j];
        }
    }

    string result="";
    queue<pair<ll, ll>> q;
    q.push({0, 0});
    queue<pair<ll, ll>> temp_q;
    result += grid[0][0];
    vector<ll> dx={0, 1};
//    vector<ll> dy={1, 0};
    vector<vector<ll>> vis(n, vector<ll>(n, 0));
    vis[0][0]=1;
    while(result.size()<2*n-1){
        char best = 'Z';
        while(!q.empty()){
            ll x = q.front().first;
            ll y = q.front().second;
            q.pop();
            for(ll i=0; i<2; i++){
                ll new_x = dx[i]+x;
                ll new_y = dx[!i]+y;
                if(new_x<n && new_y<n && grid[new_x][new_y] <= best && !vis[new_x][new_y]){
                    vis[new_x][new_y]=1;
                    if(best>grid[new_x][new_y]){
                        best=grid[new_x][new_y];
                        while(!temp_q.empty()){
                            temp_q.pop();
                        }
                    }
                    temp_q.push({new_x, new_y});
                }
            }
        }
        result+=best;
        while(!temp_q.empty()){
            q.push(temp_q.front());
            temp_q.pop();
        }
    }
    cout << result << "\n";
}
 
 
int main() {
    ll t;
    //cin >> t;
    t=1;
    while(t--){
        solve();
    }
 
    return 0;
}