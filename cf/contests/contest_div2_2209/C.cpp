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
 
using namespace std;
 
void solve() {
    ll n;
    if (!(cin >> n)) return;
 
    
    for (ll i = 1; i <= 2 * (n-2); i += 2) {
        cout << "? " << i << " " << i + 1 << endl;
        ll res;
        if (!(cin >> res) || res == -1) exit(0);
 
        if (res == 1) {
            cout << "! " << i << endl;
            return;
        }
    }

    ll i = 2*n-3;
    ll j = 2*n-2;
    ll res;

    cout << "? " << i << " " << j << endl;
    if (!(cin >> res) || res == -1) exit(0);
    if (res == 1) {
        cout << "! " << i << endl;
        return;
    }

    j+=1;
    cout << "? " << i << " " << j << endl;
    if (!(cin >> res) || res == -1) exit(0);
    if (res == 1) {
        cout << "! " << i << endl;
        return;
    }

    i+=1;
    cout << "? " << i << " " << j << endl;
    if (!(cin >> res) || res == -1) exit(0);
    if (res == 1) {
        cout << "! " << i << endl;
        return;
    }

    cout << "! " << 2*n << endl;
    return;
}
 
int main() {
    ll t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}