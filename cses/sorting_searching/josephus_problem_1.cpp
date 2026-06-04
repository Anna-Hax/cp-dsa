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
    
    queue<ll> q;
    for (ll i = 1; i <= n; i++) {
        q.push(i);
    }
    
    while (!q.empty()) {
        ll skipped = q.front();
        q.pop();
        q.push(skipped);
        
        ll removed = q.front();
        q.pop();
        cout << removed << " ";
    }
    
}

int main() {
    fastio

    int tc = 1; 

    while (tc--) {
        solve();
    }

    return 0;
}
