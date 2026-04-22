#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

struct FenwickTree {
    int size;
    vector<int> tree;

    FenwickTree(int n) : size(n), tree(n + 1, 0) {}

    void update(int i, int delta) {
        for (; i <= size; i += i & -i) {
            tree[i] += delta;
        }
    }

    int query(int i) {
        int sum = 0;
        for (; i > 0; i -= i & -i) {
            sum += tree[i];
        }
        return sum;
    }

    int queryRange(int l, int r) {
        if (l > r) return 0;
        return query(r) - query(l - 1);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll t;
    cin >> n >> t;

    vector<ll> a(n);
    vector<ll> pref(n + 1, 0);
    vector<ll> coords;

    coords.push_back(0);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        pref[i + 1] = pref[i] + a[i];
        coords.push_back(pref[i + 1]);
        coords.push_back(pref[i + 1] - t);
    }
    coords.push_back(0 - t);

    sort(coords.begin(), coords.end());
    coords.erase(unique(coords.begin(), coords.end()), coords.end());

    auto get_coord = [&](ll val) {
        return lower_bound(coords.begin(), coords.end(), val) - coords.begin() + 1;
    };

    FenwickTree ft(coords.size());
    ll count = 0;

    ft.update(get_coord(0), 1);

    for (int r = 1; r <= n; ++r) {
        ll threshold = pref[r] - t;
        int idx = get_coord(threshold);
        
        count += ft.queryRange(idx + 1, coords.size());
        
        ft.update(get_coord(pref[r]), 1);
    }

    cout << count << endl;

    return 0;
}