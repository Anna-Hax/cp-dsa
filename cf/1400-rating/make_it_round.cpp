#include <iostream>

using namespace std;

typedef long long ll;

void solve() {
    ll n, m;
    cin >> n >> m;

    ll temp_n = n;
    int cnt2 = 0, cnt5 = 0;

    // Count how many 2s and 5s are already in n
    while (temp_n > 0 && temp_n % 2 == 0) {
        cnt2++;
        temp_n /= 2;
    }
    while (temp_n > 0 && temp_n % 5 == 0) {
        cnt5++;
        temp_n /= 5;
    }

    ll k = 1;
    
    // Step 1: Balance the 2s and 5s to create 10s
    // If we have more 2s, add 5s to k
    while (cnt2 > cnt5 && k * 5 <= m) {
        k *= 5;
        cnt5++;
    }
    // If we have more 5s, add 2s to k
    while (cnt5 > cnt2 && k * 2 <= m) {
        k *= 2;
        cnt2++;
    }

    // Step 2: Add as many factors of 10 to k as possible
    while (k * 10 <= m) {
        k *= 10;
    }

    // Step 3: Maximize k by multiplying by the largest possible integer
    // such that k remains <= m. This keeps the trailing zeros count.
    if (k <= m) {
        k = (m / k) * k;
    }

    // Output the final rounded price
    cout << n * k << "\n";
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