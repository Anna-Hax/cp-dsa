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

ll gcd(ll arr, ll b) {
    while (b) {
        arr %= b;
        swap(arr, b);
    }
    return arr;
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

    ll sum=0;

    for(ll i=0; i<n; i++){
        sum=sum^arr[i];
    }

   if(sum==0){
    cout << "YES" << endl;
   } else {
        ll pr = 0, pr_ind = -1;
		for (ll i = 0; i < n; i++) {
				pr ^= arr[i];
				if (pr == sum) {
						pr_ind = i; 
						break;
				}
		}

		int suf = 0, suf_ind = -1;
		for (int i = n - 1; i >= 0; i--) {
				suf ^= arr[i];
				if (suf == sum) {
						suf_ind = i; 
						break;
				}
		}

		// If prefix ends before suffix starts, there's arr non-empty middle segment -> can partition into 3 parts with XOR sum
		if (suf_ind > pr_ind)
				cout << "YES\n";
		else
				cout << "NO\n";
   }

    
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