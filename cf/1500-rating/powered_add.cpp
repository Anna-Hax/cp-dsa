#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    if (!(cin >> n)) return;
    vector<ll> arr(n);
    for (auto &i : arr) cin >> i;

    ll max_needed_steps = 0;
    ll current_max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < current_max) {
            ll diff = current_max - arr[i];
            
            ll steps = 0;
            if (diff > 0) {
                steps = 64 - __builtin_clzll(diff); 
            }
            
            max_needed_steps = max(max_needed_steps, steps);
        } else {
            current_max = arr[i];
        }
    }

    cout << max_needed_steps << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}