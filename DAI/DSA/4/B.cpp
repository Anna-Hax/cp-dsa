#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct FenwickTree {
    int n;
    vector<int> tree;
    FenwickTree(int n) : n(n), tree(n + 1, 0) {}

    void update(int i, int delta) {
        for (; i <= n; i += i & -i) tree[i] += delta;
    }

    int query(int i) {
        int sum = 0;
        for (; i > 0; i -= i & -i) sum += tree[i];
        return sum;
    }
};

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> intervals(n);
    vector<int> b_coords;

    for (int i = 0; i < n; ++i) {
        cin >> intervals[i].first >> intervals[i].second;
        b_coords.push_back(intervals[i].second);
    }

    sort(intervals.begin(), intervals.end());

    sort(b_coords.begin(), b_coords.end());
    auto get_pos = [&](int val) {
        return lower_bound(b_coords.begin(), b_coords.end(), val) - b_coords.begin() + 1;
    };

    FenwickTree ft(n);
    long long greetings = 0;

    for (int i = 0; i < n; ++i) {
        int pos = get_pos(intervals[i].second);
        greetings += (i - ft.query(pos));
        ft.update(pos, 1);
    }

    cout << greetings << endl;
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