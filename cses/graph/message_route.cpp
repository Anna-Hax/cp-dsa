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
  
    queue<int> q;
    vector<ll> result;
    q.push(1);
    vector<int> parent(V+1, -1);
    parent[1]=1;
    vis[0]=1;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        
        for (auto &nbr : adjlist[node]) {
            if (!vis[nbr]) {
                vis[nbr] = true;
                parent[nbr]=node;
                if(nbr==V){
                    int temp = V;
                    while(temp!=1){
                        result.push_back(temp);
                        temp=parent[temp];
                    }
                    result.push_back(1);
                    reverse(result.begin(), result.end());
                    cout << result.size() << "\n";
                    for(int i=0; i<result.size(); i++){
                        cout << result[i] << " ";
                    }
                    cout << "\n";
                    return;
                }
                q.push(nbr);
            }
        }
    }
    cout << "IMPOSSIBLE" << "\n";

}

int main() {
    fastio

    ll tc = 1; 

    while (tc--) {
        solve();
    }

    return 0;
}
