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


bool check(int k, const vector<int>& a, const vector<int>& count) {
    vector<int> demands;
    demands.reserve(k);
    vector<int> caps1;
    caps1.reserve(a.size());
    
    for (int x = 0; x < k; ++x) {
        if (count[x] == 0) {
            demands.push_back(x); 
        } else {

            int extra = count[x] - 1;
            int cap = (x - 1) / 2;
            for (int j = 0; j < extra; ++j) {
                caps1.push_back(cap);
            }
        }
    }
    
    auto it = lower_bound(a.begin(), a.end(), k);
    int caps2_size = distance(it, a.end());
    
    if (demands.size() > caps1.size() + caps2_size) return false;
    
    vector<int> all_caps;
    all_caps.reserve(caps1.size() + caps2_size);
    
    
    auto it2 = it;
    int i1 = 0;
    while (i1 < caps1.size() && it2 != a.end()) {
        int v2 = (*it2 - 1) / 2;
        if (caps1[i1] <= v2) {
            all_caps.push_back(caps1[i1]);
            i1++;
        } else {
            all_caps.push_back(v2);
            it2++;
        }
    }
    while (i1 < caps1.size()) {
        all_caps.push_back(caps1[i1]);
        i1++;
    }
    while (it2 != a.end()) {
        all_caps.push_back((*it2 - 1) / 2);
        it2++;
    }
    
    int M = demands.size();
    for (int i = 0; i < M; ++i) {
        if (all_caps[all_caps.size() - M + i] < demands[i]) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n;
    if (!(cin >> n)) return;
    vector<int> a(n);
    vector<int> count(n + 2, 0);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] <= n + 1) {
            count[a[i]]++;
        }
    }
    
    sort(a.begin(), a.end());
    
    int low = 1, high = n, ans = 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (check(mid, a, count)) {
            ans = mid;
            low = mid + 1; 
        } else {
            high = mid - 1;
        }
    }
    cout << ans << "\n";
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}