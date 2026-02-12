#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll get_d(ll n) {
    ll s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

void solve() {
    ll x;
    if (!(cin >> x)) return;

    if (x % 9 != 0) {
        cout << 0 << endl;
        return;
    }

    int count = 0;

    for (ll y = x; y <= x + 100; ++y) {
        if (y - get_d(y) == x) {
            count++;
        }
    }
    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}