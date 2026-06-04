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
 
bool isPowerOfTwo(ll x) {
    return x > 0 && (x & (x - 1)) == 0;
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n, 0);
    ll same=true;
    for(ll i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]!=arr[0]){
            same=false;
        }
    }

    if(same){
        cout << 0 << endl;
        return;
    }

    ll count=0;
    ll gcd_ans=arr[0];
    for(ll i=1; i<n; i++){
        gcd_ans=gcd(gcd_ans, arr[i]);
    }

    if(gcd_ans==1){
        for(ll i=0; i<n; i++){
            if(arr[i]%2 != 0){
                arr[i]+=1;
            }
        }
        gcd_ans=arr[0];
        for(ll i=1; i<n; i++){
            gcd_ans=gcd(gcd_ans, arr[i]);
        }
        if(gcd_ans)
        for(ll i=0; i<n; i++){
            while(arr[i]>=10){
                if(arr[i]%2==0){
                    arr[i]=arr[i]/2;
                    count+=1;
                } else {
                    arr[i]+=1;
                    arr[i]=arr[i]/2;
                    count+=2;
                }
            }
        }

        ll twopower=false;

        for(ll i=0; i<n; i++){
            if(isPowerOfTwo(arr[i])){
                twopower=true;
                break;
            }
        }

        if(twopower){
            for(ll i=0; i<n; i++){
                
            }
        }
    }

    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

