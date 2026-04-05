#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int remaining_k;
vector<int> a;

void construct(int l, int r) {
    if (remaining_k <= 0 || r - l <= 1) {
        return;
    }

    remaining_k -= 2;
    int mid = (l + r) / 2;

    swap(a[mid - 1], a[mid]);

    construct(l, mid);
    construct(mid, r);
}

int main() {
    int n, k;
    if (!(cin >> n >> k)) return 0;

    if (k % 2 == 0 || k > 2 * n - 1) {
        cout << -1 << endl;
        return 0;
    }

    a.resize(n);
    iota(a.begin(), a.end(), 1);

    remaining_k = k - 1;

    construct(0, n);

    if (remaining_k > 0) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < n; i++) {
            cout << a[i] << (i == n - 1 ? "" : " ");
        }
        cout << endl;
    }

    return 0;
}