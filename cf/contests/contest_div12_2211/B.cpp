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

ll count_divisors(int n) {
    if (n == 0) return 1; 
    ll count = 0;
    for (int i = 1; i * (ll)i <= n; i++) {
        if (n % i == 0) {
            count++;
            if (i * i != n) {
                count++;
            }
        }
    }
    return count;
}

void solve() {
    int x, y;
    cin >> x >> y;

    int diff = abs(x - y);
    ll mod = 676767677;

    if (diff == 0) {
        cout << 1 << endl;
        for (int i = 0; i < x; i++) cout << 1 << " ";
        for (int i = 0; i < y; i++) cout << -1 << (i == y - 1 ? "" : " ");
        cout << endl;
    } else {
        cout << count_divisors(diff) % mod << "\n";
        
        if (x >= y) {
            for (int i = 0; i < x; i++) cout << 1 << " ";
            for (int i = 0; i < y; i++) cout << -1 << (i == y - 1 ? "" : " ");
        } else {
            for (int i = 0; i < y; i++) cout << -1 << " ";
            for (int i = 0; i < x; i++) cout << 1 << (i == x - 1 ? "" : " ");
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}