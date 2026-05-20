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


int main() {
		ios::sync_with_stdio(false);
		cin.tie(nullptr);

		int n;
		cin >> n;
		vector<int> a(n), b(n);
		for (auto &x : a) cin >> x;
		for (auto &x : b) cin >> x;

		map<pair<int, int>, int> freq; 
		int ans = 0; 
		for (int i = 0; i < n; ++i) {
			if (a[i] == 0) {
				if (b[i] == 0) ans++; 
				continue; 
			}

			int p = -b[i], q = a[i]; 
			int g = std::gcd(std::abs(p), std::abs(q)); 
			p /= g;
			q /= g;
			if (q < 0) { //denominator non-negative
				p = -p;
				q = -q;
			}
			freq[{p, q}]++; 
		}

		int mx = 0;
		for (auto &kv : freq) mx = max(mx, kv.second); 
		ans += mx; 

		cout << ans << '\n';
		return 0;
}



