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
#include <cmath>
#include <set>

void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    
    ll total = 0;
    for (char c :s) {
        if (c == '0'){
            total++;
        } 
    }
    
    if (total==0 || total== n) {
        cout << "Bob" << "\n"; 
        return;
    }
    
    ll ones = 0;
    ll zeroes = 0;
    for (ll i=0; i<n; i++) {
        if (s[i]== '1') {
            ll zeroes_left =total - zeroes;
            if (zeroes_left%2!=0) {
                cout << "Alice" << "\n";
                return;
            }
            ones+=1;
        } else {
            zeroes+=1;
            if (ones % 2 != 0) {
                cout << "Alice" << "\n";
                return;
            }
        }
    }
    
    cout << "Bob" << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        solve();
    }
    return 0;
}