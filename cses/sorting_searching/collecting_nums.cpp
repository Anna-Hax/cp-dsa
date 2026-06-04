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
   vector<ll> pos(n, 0);
   ll x;
   for(ll i=0; i<n; i++){
    cin >> x;
    pos[x-1]=i;
}

   ll ans=1;
   ll prevPos = pos[0];
   for(ll i=1; i<n; i++){
    if(pos[i]<prevPos){
        ans+=1;
    }
    prevPos=pos[i];
   }

   cout << ans << endl;
}

int main() {
    fastio

    int tc = 1; // Number of test cases
    //cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}
