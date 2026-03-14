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

 
int algo(int n){
    
    vector<int> dp(n+1,0);
    dp[0]=1;
    
    for(int i = 1; i<=n; i++){
        int num = std::abs(i);
        int maxm=0;
        while (num > 0) {
            maxm=max(maxm, num%10);
            num /= 10;
        }
        //cout << "i" << i << "maxm" << maxm << endl;

        if(i-maxm!=0){
            dp[i]+=1;
        }
        dp[i]+=dp[i-maxm];
        //cout << dp[i] << endl;
    }
    return dp[n];

}
 
 
int main() {
    cin.tie(0);
    int n;
    cin >> n;
   

    int result = algo(n);
    
    cout << result << endl;
    
 
    return 0;
}