#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool can_achieve(const vector<ll>& arr, ll target, ll k) {
    int n = arr.size();
    
    for (int i = 0; i < n; i++) {
        ll current_cost = 0;
        ll required_height = target;
        bool possible = false;
        
        for (int j = i; j < n; j++) {
            if (arr[j] >= required_height) {
                possible = true;
                break;
            }
     
            if (j == n - 1) {
                break;
            }
            
            current_cost += (required_height - arr[j]);
            
            required_height--;
        }
        
        if (possible && current_cost <= k) {
            return true;
        }
    }
    return false;
}

void solve() {
    int n;
    ll k;
    cin >> n >> k;

    vector<ll> arr(n);
    ll max_initial = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        max_initial = max(max_initial, arr[i]);
    }

    ll lo = max_initial;
    ll hi = max_initial + k;
    ll ans = lo;

    while (lo <= hi) {
        ll mid = lo + (hi - lo) / 2;
        if (can_achieve(arr, mid, k)) {
            ans = mid;      
            lo = mid + 1;
        } else {
            hi = mid - 1;   
        }
    }

    cout << ans << "\n";
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