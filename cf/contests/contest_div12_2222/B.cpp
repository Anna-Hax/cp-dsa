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
    int n, m;
    cin >> n >> m;

    vector<long long> odd_elements, even_elements;
    long long total_sum = 0;

    for (int i = 1; i <= n; ++i) {
        long long a;
        cin >> a;
        total_sum += a;
        if (i % 2 != 0) odd_elements.push_back(a);
        else even_elements.push_back(a);
    }

    sort(odd_elements.begin(), odd_elements.end(), greater<long long>());
    sort(even_elements.begin(), even_elements.end(), greater<long long>());

    int odd_req = 0;
    int even_req = 0;

    for (int i = 0; i < m; ++i) {
        int x;
        cin >> x;
        if (x % 2 != 0) odd_req++;
        else even_req++;
    }

    long long marked_sum = 0;

    if (odd_req > 0 && !odd_elements.empty()) {
        marked_sum += odd_elements[0];
        odd_req--;
        for (int i = 1; i < (int)odd_elements.size() && odd_req > 0; ++i) {
            if (odd_elements[i] > 0) {
                marked_sum += odd_elements[i];
                odd_req--;
            } else break;
        }
    }

    if (even_req > 0 && !even_elements.empty()) {
        marked_sum += even_elements[0];
        even_req--;
        for (int i = 1; i < (int)even_elements.size() && even_req > 0; ++i) {
            if (even_elements[i] > 0) {
                marked_sum += even_elements[i];
                even_req--;
            } else break;
        }
    }

    cout << total_sum - marked_sum << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}