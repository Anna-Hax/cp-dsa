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

bool bsfun(vector<ll>& arr, ll target){

    ll n=arr.size();
    ll high=n-1;
    ll low=0;

    ll mid;

    while(high>=low){
        mid=(high+low)/2;
        if(arr[mid]==target){
            return true;
        }

        if(arr[mid]>target){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    if (!(cin >> n)) return 0;
    
    vector<ll> S(n);
    for (ll i = 0; i < n; i++) {
        cin >> S[i];
    }

    ll q;
    cin >> q;
    
    ll count = 0;
    for (ll i = 0; i < q; i++) {
        ll target;
        cin >> target;
        
        if (bsfun(S, target)) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}