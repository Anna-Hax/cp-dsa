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

 
int algo(int n, vector<string> arr){

    string s;
    vector<vector<int>> dp(n, vector<int>(n, 0));

    s=arr[0];
    if(s[0]=='*'){
        return 0;
    }
    s=arr[n-1];
    if(s[n-1]=='*'){
        return 0;
    }
    
    for(int i = 0; i<n; i++){
        s=arr[i];
        
        for(int j = 0; j<n;j++){
            if(s[j]=='.'){
                dp[i][j]=0;
               
            } else {
                dp[i][j]=-1;
            }
        }
    }

    
    

    dp[0][0]=1;


    for(int i = 0; i<n; i++){
        for(int j = 0; j<n;j++){
            if(dp[i][j] != -1){
                if(i-1>=0 && dp[i-1][j]>=0){
                    dp[i][j] = (dp[i][j]+dp[i-1][j])%INF;
                }
                if(j-1>=0 && dp[i][j-1]>=0){
                    dp[i][j] = (dp[i][j]+dp[i][j-1])%INF;
                }
            }
        }
    }

    return dp[n-1][n-1];



}
 
 
int main() {
    cin.tie(0);
    int n;
    cin >> n;

    vector<string> arr(n, "");
    string s;
    for(int i = 0; i<n; i++){
        cin >> s;
        arr[i]=s;
    }

    int result = algo(n, arr);
    
    cout << result << endl;
    
 
    return 0;
}