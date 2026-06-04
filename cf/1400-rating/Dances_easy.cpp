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

bool check(vector<ll>& arr_a, vector<ll>& arr_b, ll num){
    
    ll n = arr_a.size();
   
    for (ll i = 0; i < n - num; i++) {
        if (arr_a[i] >= arr_b[i + num]) {
            return false;
        }
    }
    return true;
}

void solve(){
    ll n, m;
    cin >> n >> m;
    vector<ll> arr_a(n, 0);
    arr_a[0]=1;
    for(ll i=1; i<n; i++){
        cin >> arr_a[i];
    }
    vector<ll> arr_b(n, 0);
    for(ll i=0; i<n; i++){
        cin >> arr_b[i];
    }
     
    sort(arr_a.begin(), arr_a.end());
    sort(arr_b.begin(), arr_b.end());

    if(arr_a[0] >= arr_b[n-1]){
        cout << n << endl;
        return;
    }

    ll low = 0;
    ll high = n-1;
    ll mid;
    ll ans=n-1;
    while(high>=low){
        mid=(low+high)/2;
        if(check(arr_a, arr_b, mid)){
            ans=mid;
            high=mid-1;
        } else {
            low=mid+1;
        }
    }

    cout << ans << endl;
    return;
    
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

