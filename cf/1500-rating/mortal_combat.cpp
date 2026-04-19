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
	int n;
	cin >> n;
	vector<int> arr(n);
	for (auto &i : arr) cin >> i; 

    // 1->friend
    vector<vector<ll>> dp(n+1, vector<ll>(2, 0));
    dp[n-1][1]=arr[n-1];
    for (ll i = n - 2; i >= 0; i--) {
		dp[i][0] = min(dp[i + 1][1], dp[i + 2][1]);
		dp[i][1] = min(
			dp[i + 1][0] + arr[i],                
			dp[i + 2][0] + arr[i] + arr[i + 1]      
		);
	}

    cout << dp[0][1] << endl;
		
}



int32_t main() {
		ios::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);

		int t;
		cin >> t;
		while (t--) {
				solve();
		}

		return 0;
}
