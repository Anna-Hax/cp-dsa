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
#include <numeric>

using namespace std;

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll lcm(ll a, ll b) {
    if (a == 0 || b == 0) return 0;
    return (a / gcd(a, b)) * b;
}

vector<ll> myfun(ll a,ll b,ll c,ll m){

    ll nA = m / a;
    ll nB = m / b;
    ll nC = m / c;

    ll lab = lcm(a, b);
    ll lbc = lcm(b, c);
    ll lac = lcm(a, c);
    ll labc = lcm(lab, c);

    ll nAB = m / lab;
    ll nBC = m / lbc;
    ll nAC = m / lac;
    ll nABC = m / labc;

  
    ll onlyABC = nABC;

    ll onlyAB = nAB - onlyABC;
    ll onlyBC = nBC - onlyABC;
    ll onlyAC = nAC - onlyABC;

    ll onlyA = nA - (onlyAB + onlyAC + onlyABC);
    ll onlyB = nB - (onlyAB + onlyBC + onlyABC);
    ll onlyC = nC - (onlyAC + onlyBC + onlyABC);

    ll aTotal = (onlyA * 6) + (onlyAB * 3) + (onlyAC * 3) + (onlyABC * 2);
    ll bTotal   = (onlyB * 6) + (onlyAB * 3) + (onlyBC * 3) + (onlyABC * 2);
    ll cTotal = (onlyC * 6) + (onlyAC * 3) + (onlyBC * 3) + (onlyABC * 2);

    return {aTotal, bTotal, cTotal};
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        ll a, b, c, m;
        cin >> a >> b >> c >> m;
        
        vector<ll> result= myfun(a, b, c, m);
        cout << result[0] << " " << result[1] << " " << result[2] << endl;

    }
    return 0;
}