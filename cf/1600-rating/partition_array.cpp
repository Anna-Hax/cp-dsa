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

void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n, 0);
    ll temp;
    for(ll i=0; i<n; i++){
        cin >> temp;
        arr[i]=temp;
    }

    ll count=1;

    for(ll k=1; k<=(n)/2; k++){
        if(n%k==0){
            ll gcd_total=0;
            for(ll j=0; j<k; j++){
                ll i=2;
                ll gcd_num=abs(arr[j+k] - arr[j]);
                while((j + (k*i)) < n){
                    gcd_num=gcd(gcd_num, abs(arr[j+k*i] - arr[j]));
                    i++;
                }

                if(gcd_total!=0){
                    gcd_total=gcd(gcd_total, gcd_num); 
                } else {
                    gcd_total=abs(gcd_num);
                }
            }
            if(gcd_total!=1){
                count+=1;
            }
        }
    }
    cout << count << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}