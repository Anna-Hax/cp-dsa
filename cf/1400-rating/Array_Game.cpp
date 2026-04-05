#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve() {
    int n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    if (k >= 3) return 0;

    sort(arr.begin(), arr.end());
    
    ll min_val = arr[0];


    for (int i = 0; i < n - 1; i++) {
        min_val = min(min_val, arr[i + 1] - arr[i]);
    }

    if (k == 1) return min(min_val, arr[0]);


    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            ll diff = arr[j] - arr[i];
            
            auto it = lower_bound(arr.begin(), arr.end(), diff);
            
            if (it != arr.end()) {
                min_val = min(min_val, *it - diff);
            }
            if (it != arr.begin()) {
                min_val = min(min_val, diff - *prev(it));
            }
        }
    }

    return min_val;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
    return 0;
}