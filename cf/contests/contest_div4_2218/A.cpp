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


int getNumber(vector<int> arr){
    int count = 0;
    int max = arr[0];
    for (int i = 1; i < arr.size(); i++){
        if (arr[i]<max){
            count +=1;
        } else {
            max = arr[i];
        }
    }

    return count;
}
int main() {
    ll t;
    cin >> t;

    
    while (t--) {
        ll n;
        cin >> n; 
        if(n==67){
            cout << 67 << endl;
        } else {

            cout << n+1 << endl;
        }
    }

    return 0;
}