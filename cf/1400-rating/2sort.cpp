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

ll myfun(ll n, ll k, vector<ll> &a) {
    
    ll ans = 0, count = 0;
	ll l = 0, r = 0; 

		while (r < k) { 
				if (a[r] < 2 * a[r + 1]) { 
						count++;
				}
				r++;
		}

		while (r < n - 1) { 
				if (count == k) { 
						ans++;
				}

				if (a[l] < 2 * a[l + 1]) { 
						count--;
				}
				if (a[r] < 2 * a[r + 1]) { 
						count++;
				}
				l++;
				r++;
		}

		if (count == k) {
				ans++;
		}
    return ans;
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {

      
        ll n, k;
        cin >> n >> k;
        vector<ll> arr;
        ll temp;
        for(ll i =0; i<n; i++){
            cin >> temp;
            arr.push_back(temp);
        }  
    
    
        cout << myfun(n, k, arr) << endl;

    }
    return 0;
}