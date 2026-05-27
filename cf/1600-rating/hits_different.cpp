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




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    ll RC = 2023;
    ll max_elements=(2023*2024)/2;
    vector<ll> diag(max_elements+1, 0);
    vector<ll> dp(max_elements+1, 0);

    dp[1]=diag[1]=1;

    ll element=2;
    for(ll row=2; row<=RC; row++){
        ll first_prev_row=element-row+1;
        for(ll i=0; i<row; i++){

            
            diag[element]=(element*element);
            if(i>0){
                diag[element]+=diag[element-row];
            }
            dp[element]=diag[element];
            if(i<row-1){
                dp[element]+=dp[element-row+1];
            }
            
            element+=1;
        }
    }

    while (t--) {
        ll n;
        cin >> n;

        cout << dp[n] << endl;
    }
    return 0;
}