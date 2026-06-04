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
    ll x, n;
    cin >> x >> n;
   // unordered_set<ll> arr;
   // ll temp;
   // for(ll i=0;i <n; i++){
   //     cin >> temp;
   //     arr.insert(temp);
   // }

    multiset<ll> current;
    multiset<ll> dist;
    current.insert(0);
    current.insert(x);
    dist.insert(x);
    ll it;
    for(int i=0; i<n; i++){
        cin >> it;
        auto upper = current.upper_bound(it);
        auto lower = prev(upper);

        
        dist.erase(dist.find(*upper - *lower));

        dist.insert(it - *lower);
        dist.insert(*upper - it);

        current.insert(it);

        cout << *dist.rbegin() << " ";
    }
    cout << endl;
    
}

int main() {
    fastio

    int tc = 1; 

    while (tc--) {
        solve();
    }

    return 0;
}
