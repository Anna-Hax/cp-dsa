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
 
int algo(int n, int x, vector<int> coins){
    
    vector<int> dp(x+1, 0);
    dp[0]=1;
    for(int i = 1; i<=x; i++){
        for(int coin : coins){
            if(i-coin>=0){
                dp[i]=(dp[i]+dp[i-coin])%INF;
            } else {
                break;
            }
        }
    }
    return dp[x];

}
 
 
int main() {
    cin.tie(0);
    int n;
    cin >> n;
    int x;
    cin >> x;
    vector<int> coins(n, 0);
    int temp;
    for(ll i = 0; i<n; i++){
        cin >> temp;
        coins[i]=temp;
    }

    sort(coins.begin(), coins.end());
    int result = algo(n, x, coins);
    
    cout << result << endl;
    
 
    return 0;
}