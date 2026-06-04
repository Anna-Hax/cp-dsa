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
#include <iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

// Defining the PBDS ordered set alias
typedef tree<int, null_type, less<int>, rb_tree_tag, 
             tree_order_statistics_node_update> ordered_set;


void solve() {
    ll n, k;
    cin >> n >> k;
    
    ordered_set s;
    for (int i = 1; i <= n; i++) {
        s.insert(i);
    }
    int idx = k % n;
    
    while (!s.empty()) {
        auto it = s.find_by_order(idx);
        cout << *it << " ";
        
        s.erase(it);
        
        if (!s.empty()) {
            idx = (idx + k) % s.size();
        }
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
