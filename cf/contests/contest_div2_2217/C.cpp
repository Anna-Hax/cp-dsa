#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    long long n, m, a, b;
    if (!(cin >> n >> m >> a >> b)) return;

    if (gcd(a, n) == 1 && gcd(b, m) == 1 && gcd(n, m) <= 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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