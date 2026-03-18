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
 

//knapsack problem types
int algo(int n, int x, vector<vector<int>>& arr){
    
    vector<int> dp(x+1, 0);
    
    for(ll i = 0; i<n; i++){
        for(ll j = x; j>=arr[i][1]; j--){
            dp[j]=max(dp[j], dp[j-arr[i][1]]+arr[i][0]);
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
    vector<int> price(n, 0);
    vector<int> pages(n, 0);
    int temp;
    for(ll i = 0; i<n; i++){
        cin >> temp;
        price[i]=temp;
    }
    for(ll i = 0; i<n; i++){
        cin >> temp;
        pages[i]=temp;
    }

    vector<vector<int>> arr(n, vector<int>(2, 0));
    for(ll i = 0; i<arr.size(); i++){
        arr[i][0]=pages[i];
        arr[i][1]=price[i];
    }

    int result = algo(n, x, arr);
    
    cout << result << endl;
    
 
    return 0;
}