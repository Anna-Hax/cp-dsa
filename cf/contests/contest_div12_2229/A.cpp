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


ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    
    ll n;
    cin >> n;
    vector<ll> arr(n, 0);

    ll temp;
    for(ll i=0; i<n; i++){
        cin >> temp;
        arr[i]=temp;
    }

    ll maxm=*max_element(arr.begin(), arr.end());
    ll minm=*min_element(arr.begin(), arr.end());

    ll solution=INT_MAX;
    for(ll i=minm; i<=maxm; i++){
        solution = min(solution, max(abs(i-minm), abs(i-maxm)));
    }
    cout << solution << "\n";
    return;
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