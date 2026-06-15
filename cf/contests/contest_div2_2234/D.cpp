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
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


void solve() {
    ll n, k;
    cin >> n >> k;
    string s, z;
    cin >> s >> z;

    ll xA = 0, xB = 0, xC = 0;
    for (ll i = 0; i < n; ++i) {
        if (s[i] == '1') xA++;
        if (z[i] == '1') xB++;
        if (s[i] != z[i]) xC++;
    }

    ll cC = 0;
    if (k % 2 == 1) {
        cC = ((1LL << k) + 1) / 3;
    } else {
        cC = ((1LL << k) - 1) / 3;
    }
    
    ll cA = ((1LL << k) + 1 - cC) / 2;
    ll cB = cA;

    ll ans = 0;
    ans += cA * xA * (n - xA);
    ans += cB * xB * (n - xB);
    ans += cC * xC * (n - xC);

    cout << ans << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}