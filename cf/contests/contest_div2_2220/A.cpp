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

string myfun(vector<ll>& arr) {

    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

        ll n;
        cin >> n;
        ll temp;
        vector<ll> arr(n, 0);
        for(ll i=0; i<n; i++){
            cin >> temp;
            arr[i]=temp;
        }

        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());

        bool ans=true;
        for(ll i=0; i<n-1; i++){
            if(arr[i]==arr[i+1]){
                cout << -1;
                ans=false;
                break;
            }
        }
        if(ans){
            for(ll i=0; i<n; i++){
                cout << arr[i] << " ";
              
            }
        }
        cout << endl;
    }
    return 0;
}