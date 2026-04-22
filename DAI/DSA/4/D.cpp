#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

ll n, k, A, B;
vector<int> positions;

int count_avengers(int L, int R) {
    auto it1 = lower_bound(positions.begin(), positions.end(), L);
    auto it2 = upper_bound(positions.begin(), positions.end(), R);
    return distance(it1, it2);
}

ll solve(ll L, ll R) {
    int na = count_avengers(L, R);
    ll current_burn_cost;

    if (na == 0) {
        current_burn_cost = A;
    } else {
        current_burn_cost = B * na * (R - L + 1);
    }

    if (L == R || na == 0) {
        return current_burn_cost;
    }

    ll mid = L + (R - L) / 2;
    
    ll split_cost = solve(L, mid) + solve(mid + 1, R);
    
    return min(current_burn_cost, split_cost);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (!(cin >> n >> k >> A >> B)) return 0;

    positions.resize(k);
    for (int i = 0; i < k; i++) {
        cin >> positions[i];
    }

    sort(positions.begin(), positions.end());

    ll base_length = 1LL << n; // 2^n
    cout << solve(1, base_length) << endl;

    return 0;
}