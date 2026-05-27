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


    ll num = *max_element(arr.begin(), arr.end()) - *min_element(arr.begin(), arr.end());
    vector<ll> pos;
    vector<ll> neg;
    ll zero_count=0;

    for(ll i=0; i<n; i++){
        if(arr[i]<0){
            neg.push_back(arr[i]);
        }else {
            pos.push_back(arr[i]);
        }
        if(arr[i]==0){
            zero_count+=1;
        }
    }
    if(zero_count==n){
        cout << "No" << "\n";
        return;
    }

    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end());

    vector<ll> ans(n);
    ll sum=0;

    for(ll i=0; i<n; i++){
        if(sum<=0 && !pos.empty()){
            ans[i]=pos.back();
            pos.pop_back();
        } else {
            ans[i]=neg.back();
            neg.pop_back();
        }
        sum+=ans[i];
    }

    cout << "Yes" << "\n";
    for(ll i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    cout << "\n";

    

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