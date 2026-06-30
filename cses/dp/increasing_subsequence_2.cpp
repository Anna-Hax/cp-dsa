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

 
void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n, 0);

    for(ll i=0; i<n; i++){
        cin >> arr[i];
    }

    
    vector<ll> temp;
    temp.push_back(arr[0]);
    ll count=n;
    for(ll i=1; i<n; i++){
        if(arr[i]>temp.back()){
            temp.push_back(arr[i]);
            count+=1;
        } else{
            auto it = lower_bound(temp.begin(), temp.end(), arr[i]);
            *it = arr[i];
        }
    }
    cout << count << "\n";
   
}
 
 
int main() {
    ll t;
    //cin >> t;
    t=1;
    while(t--){
        solve();
    }
 
    return 0;
}