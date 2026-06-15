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

void solve() {
    ll V;
    cin >> V;
    ll m;
    cin >> m;
    ll q;
    cin >> q;
    ll n1, n2, n3;

    vector<vector<ll>> matrix(V+1, vector<ll>(V+1, 1e16));
    for(ll i=0; i<m; i++){
        cin >> n1 >> n2 >> n3;
        matrix[n1][n2]=min(matrix[n1][n2], n3);
        matrix[n2][n1]=min(matrix[n2][n1], n3);
    }
    
    ll n = matrix.size();
    for(ll i=1; i<n; i++){
        for(ll j=1; j<n; j++){
            if(i==j){
                matrix[i][j]=0;
            }
        }
    }
       
    for(ll via=1; via<n; via++){
        for(ll i=1; i<n; i++){
            for(ll j=1; j<n; j++){
                matrix[i][j]=min(matrix[i][j], matrix[i][via]+matrix[via][j]);
            }
        }
    }
    for(ll i=1; i<n; i++){
        for(ll j=1; j<n; j++){
            if(matrix[i][j]==1e16){
                matrix[i][j]=-1;
            }
        }
    }
	
    for(ll i=0; i<q; i++){
        cin >> n1 >> n2;
        cout << matrix[n1][n2] << "\n";
    }

    
}

int main() {
    fastio

    ll tc = 1; 

    while (tc--) {
        solve();
    }

    return 0;
}
