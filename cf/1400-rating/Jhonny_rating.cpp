#include <iostream>

using namespace std;
using ll = long long;

void solve() {
    ll n; 
    if (!(cin >> n)) return; 
    
    ll ans = 0;

    while (n > 0) {
        ans += n;
        n /= 2;
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