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
    ll n;
    if (!(cin >> n)) return;

    if (n == 10) {
        cout << -1 << "\n";
        return;
    }

    ll remainder = n % 12;
    ll first_part = 0;

    if (remainder == 10) {
        first_part = 22;
    } else if (remainder == 11) {
        first_part = 11;
    } else {
        first_part = remainder;
    }

    ll second_part = n - first_part;
    cout << first_part << " " << second_part << "\n";
}

int main() {
    fastio;

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}