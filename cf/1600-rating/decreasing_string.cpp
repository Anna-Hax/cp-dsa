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

void solve(){
    string s;
    cin >> s;
    ll pos;
    cin >> pos;

    ll n = s.size();

    vector<ll> suf(n, 0);
    suf[0] = n;
    for(ll i = 1; i < n; i++){
        suf[i] = suf[i-1] + (n - i);
    }

    ll low = 0;
    ll high = n - 1;
    ll mid;
    ll target_string_idx = 0; 
    
    while(low <= high){
        mid = (high + low) / 2;
        if(pos <= suf[mid]){
            high = mid - 1;
            target_string_idx = mid;
        } else {
            low = mid + 1;
        }
    }

    ll deletions = target_string_idx; 
    
    ll local_pos = pos;
    if (target_string_idx > 0) {
        local_pos -= suf[target_string_idx - 1];
    }

    vector<ll> to_be_deleted;
    stack<ll> st;
    
    for(ll i=0; i<n; i++){
        while(!st.empty() && s[st.top()]>s[i]){
            to_be_deleted.push_back(st.top());
            st.pop();
        }
        st.push(i);
    }

    while (!st.empty()) {
        to_be_deleted.push_back(st.top());
        st.pop();
    }
    vector<bool> is_deleted(n, false);
    for (int i = 0; i < deletions; i++) {
        is_deleted[to_be_deleted[i]] = true;
    }
    ll curr=0;
    for(ll i=0; i<n; i++){
        if(!is_deleted[i]){
            curr+=1;
            if (curr == local_pos) {
                cout << s[i];
                return;
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