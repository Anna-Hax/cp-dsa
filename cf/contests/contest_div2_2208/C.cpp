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

float myfun(vector<vector<float>>& arr) {

    vector<float> dp(arr.size()+1, 0);
    float costi;
    float p;
    for(ll i = arr.size()-1; i>=0; i--){
        costi=arr[i][0];
        p=arr[i][1];
        dp[i]=max(dp[i+1], costi+(dp[i+1]*(1-(p/100))));
    }
    return dp[0];
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed << setprecision(6);
    ll t;
    cin >> t;
    while (t--) {

        ll n;
        cin >> n;

        vector<vector<float>> arr(n, vector<float>(2, 0.0));
        float temp;

        for(ll i = 0; i<n; i++){
            for(ll j = 0; j<2; j++){
                cin >> temp;
                arr[i][j]=temp;
            }
        }

        float result = myfun(arr);
        cout << result << "\n";
    }
    return 0;
}