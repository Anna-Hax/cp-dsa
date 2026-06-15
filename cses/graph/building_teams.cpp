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
    ll V;
    cin >> V;
    ll m;
    cin >> m;
    vector<pair<int, int>> edges;
    ll n1, n2;
    vector<vector<int>> adjlist(V+1);
    for(int i=0; i<m; i++){
        cin >> n1 >> n2;
        adjlist[n1].push_back(n2);
        adjlist[n2].push_back(n1);
    }

   
    vector<bool> vis(V+1, false);
    vector<int> color(V+1, -1);
  
    for(int i = 1; i <= V; i++){
        if(!vis[i]){
            color[i]=0;
            queue<int> q;
            q.push(i);
            vis[i] = true;
            
            while(!q.empty()){
                int num = q.front();
                q.pop();
                for (auto &nbr : adjlist[num]) {
                    if (!vis[nbr]) {
                        vis[nbr] = true;
                        color[nbr]=1-color[num];
                        q.push(nbr);
                    } else if(color[nbr]==color[num]) {
                        cout << "IMPOSSIBLE" << "\n";
                        return;
                    }
                }
            }
        } 
    }

    for(int i=1; i<=V; i++){
        cout << color[i]+1 << " ";
    }
    cout << "\n";
}

int main() {
    fastio

    ll tc = 1; 

    while (tc--) {
        solve();
    }

    return 0;
}
