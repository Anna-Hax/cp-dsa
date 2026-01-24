// By Auchenai01
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;

const ll MOD = 998244353;
const ll MAXX = 1e16;
const int INF = 1e9 + 7;

ll myfun(ll n) {
    n = 2 * n;
    ll sum = 0;
    while (n--) {
        sum += n;
    }
    return sum;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // ===== Program start timestamp =====
    auto program_start = chrono::high_resolution_clock::now();

    

    

        // ----- Test case start timestamp -----
        auto tc_start = chrono::high_resolution_clock::now();

        
        ll n = 1000000000;

        ll result = myfun(n);
        cout << result << '\n';

        // ----- Test case end timestamp -----
        auto tc_end = chrono::high_resolution_clock::now();
        chrono::duration<double, milli> tc_time = tc_end - tc_start;

        cerr << "[Timestamp] Test case time: "
             << tc_time.count() << " ms\n";
    

    // ===== Program end timestamp =====
    auto program_end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> total_time = program_end - program_start;

    cerr << "[Timestamp] Total execution time: "
         << total_time.count() << " ms\n";

    return 0;
}
