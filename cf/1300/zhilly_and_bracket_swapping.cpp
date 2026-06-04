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
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    
    ll bal1 = 0;
    ll bal2 = 0;
    
    for (ll i = 0; i < n; i++) {
        if (s1[i] == s2[i]) {
            if (s1[i] == '(') {
                bal1++;
                bal2++;
            } else {
                bal1--;
                bal2--;
            }
        } else {
            
            if (bal1 < bal2) {
                bal1++; 
                bal2--; 
            } else {
                bal1--; 
                bal2++; 
            }
        }
        
        if (bal1 < 0 || bal2 < 0) {
            cout << "NO\n";
            return;
        }
    }
    
    if (bal1 == 0 && bal2 == 0) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
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