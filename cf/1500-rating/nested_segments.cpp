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

    vector<vector<ll>> arr(n, vector<ll>(3, 0));
    ll temp;
    for(ll i=0; i<n; i++){
        cin >> temp;
        arr[i][0]=temp;
        cin >> temp;
        arr[i][1]=temp;
        arr[i][2]=i+1;
    }

    sort(arr.begin(), arr.end());

    for(ll i=0; i<n-1; i++){
        if(arr[i][0]>=arr[i+1][0] && arr[i][1]<=arr[i+1][1]){
            cout << arr[i][2] << " " << arr[i+1][2];
            return;
        }

        if(arr[i][0]<=arr[i+1][0] && arr[i][1]>=arr[i+1][1]){
            cout << arr[i+1][2] << " " << arr[i][2];
            return;
        }
    }
    
    cout << -1 << " " << -1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int t;
    //cin >> t;
    //while (t--) {
        solve();
    //}
    return 0;
}