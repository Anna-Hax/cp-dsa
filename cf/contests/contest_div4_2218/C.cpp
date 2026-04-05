#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> p(3 * n);
    int small = 1;
    int large = n + 1;

    for (int i = 0; i < n; ++i) {
        p[3 * i] = small++;
        p[3 * i + 1] = large++;
        p[3 * i + 2] = large++;
    }

    for (int i = 0; i < 3 * n; ++i) {
        cout << p[i] << (i == 3 * n - 1 ? "" : " ");
    }
    cout << "\n";
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