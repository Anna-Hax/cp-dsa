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

    string s;
    cin >> s;
    vector<ll> arrs(n, 0);
    for(ll i=0; i<n; i++){
        if(s.substr(i, 1)=="1"){
            arrs[i]=1;
        }
    }

    ll q;
    cin >> q;

    ll ones=0;
    ll zeroes=0;

    for(ll i=0; i<n; i++){
        if(arrs[i]==1){
            ones=ones^arr[i];
        } else {
            zeroes=zeroes^arr[i];
        }
    }

    vector<ll> prXor(n + 1, 0);
	for (ll i = 1; i <= n; i++) {
			prXor[i] = prXor[i - 1] ^ arr[i-1]; // prefix XOR to query XOR on any [l, r]
	}
    for(ll m=0; m<q; m++){

        ll type;
        cin >> type;
        ll l, r, g;
        if(type==1){
            cin >> l >> r;
            
            ll x=prXor[r]^prXor[l-1];
            zeroes=zeroes^x;
            ones=ones^x;
        
        } else {
            cin >> g;
            if(g==1){
                cout << ones << " ";
            } else {
                cout << zeroes << " ";
            }
        }
    }
    cout << endl;
    
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