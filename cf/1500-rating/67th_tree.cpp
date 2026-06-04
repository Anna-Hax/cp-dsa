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
    ll x, y;
    cin >> x >> y;

    if((x+y)%2==0){ 
        x-=1;
    } else {
        y-=1;
    }

    if(x>y || x<0 || y<0){
        cout << "NO" << "\n";
        return;
    }

    cout << "YES" << "\n";

    for(ll i=2; i<=x+1; i++){
        cout << 1 <<  " " << i << "\n";
    }
    
    for(ll i=2; i<=x+1; i++){
        cout << i << " " << x+i << "\n";
    }

    ll num = 2*(x)+2;
    y=y-x;

    while(y--){
        cout << 1 << " " << num << "\n";
        num+=1;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}