#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    int target = 1;
    int count = 0;

    for (int i = 0; i < n; ++i) {
        if (p[i] == target) {
            target++;
            count++;
        }
    }

    int elements_to_move = n - count;

    int ans = (elements_to_move + k - 1) / k;

    cout << ans << endl;
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