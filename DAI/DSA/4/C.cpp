#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

typedef long long ll;

set<ll> reachable_sums;
vector<ll> prefix_sums;
vector<int> a;

void find_sums(int l, int r) {
    if (l > r) return;

    ll current_sum = prefix_sums[r + 1] - prefix_sums[l];
    reachable_sums.insert(current_sum);

    int mn = a[l];
    int mx = a[r];

    if (mn == mx) return;

    int mid = (mn + mx) / 2;

    int split_idx = upper_bound(a.begin() + l, a.begin() + r + 1, mid) - a.begin() - 1;

    find_sums(l, split_idx);
    find_sums(split_idx + 1, r);
}

void solve() {
    int n, q;
    cin >> n >> q;

    a.assign(n, 0);
    prefix_sums.assign(n + 1, 0);
    reachable_sums.clear();

    for (int i = 0; i < n; i++) cin >> a[i];
    
    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++) {
        prefix_sums[i + 1] = prefix_sums[i] + a[i];
    }

    find_sums(0, n - 1);

    while (q--) {
        ll s;
        cin >> s;
        if (reachable_sums.count(s)) cout << "Yes" << "\n";
        else cout << "No" << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}