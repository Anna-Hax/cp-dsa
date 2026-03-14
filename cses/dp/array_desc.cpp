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

 
int algo(int m, vector<string> arr){


    

}
 
 
int main() {
    cin.tie(0);
    int n;
    cin >> n;
    int m;
    cin >> m;

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