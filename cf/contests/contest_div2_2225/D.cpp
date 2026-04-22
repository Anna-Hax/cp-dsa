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


void solve() {
    ll n, x;
    cin >> n;
    cin >> x;

    ll left_pairs, right_pairs;

    ll ans;
    if(x!=n && x!=1){
        if(x%2==0){
            left_pairs=((x)/2);
            right_pairs=((n-x-1)/2);
        } else {
            left_pairs=((x-1)/2);
            right_pairs=((n-x)/2);
        }

        ll right_odd_pairs, right_even_pairs, left_odd_pairs, left_even_pairs;
        if(right_pairs%2!=0){
            right_even_pairs=((right_pairs-1)/2)%MOD;
            right_odd_pairs=((right_pairs+1)/2)%MOD;
        } else {
            right_even_pairs=((right_pairs)/2)%MOD;
            right_odd_pairs=((right_pairs)/2)%MOD;
        }

        if(left_pairs%2!=0){
            left_even_pairs=((left_pairs-1)/2)%MOD;
            left_odd_pairs=((left_pairs+1)/2)%MOD;
        } else {
            left_even_pairs=((left_pairs)/2)%MOD;
            left_odd_pairs=((left_pairs)/2)%MOD;
        }

        ans= ((left_odd_pairs*right_even_pairs)%MOD + (left_even_pairs*right_odd_pairs)%MOD + left_odd_pairs%MOD + right_odd_pairs%MOD)%MOD;
    } else {
        if(x==1){
            ll total_pairs=((n-1)/2);
            ll odd_pairs;
            if(total_pairs%2!=0){
                odd_pairs=((total_pairs+1)/2)%MOD;
            } else {
                odd_pairs=(total_pairs/2)%MOD;
            } 
            ans=odd_pairs%MOD;
        }

        if(x==n){
            if(n%2==0){
                ans=0;
            } else {
                ll total_pairs=((n-1)/2);
                ll odd_pairs;
                if(total_pairs%2!=0){
                    odd_pairs=((total_pairs+1)/2)%MOD;
                } else {
                    odd_pairs=(total_pairs/2)%MOD;
                } 
                ans=odd_pairs%MOD;
            }
        }
    }

    cout << ans << endl;
    return;
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        solve();
        
    }
    return 0;
}