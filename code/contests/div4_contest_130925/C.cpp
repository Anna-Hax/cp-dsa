#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; long long m;
        cin >> n >> m;

        vector<long long> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i] >> b[i];
        }

        // Start at time 0, side 0
        long long prev_time = 0;
        int prev_side = 0;
        long long total_points = 0;

        for (int i = 0; i < n; i++) {
            long long gap = a[i] - prev_time;  // Time available between prev and current
            int side_diff = (prev_side != b[i]) ? 1 : 0;

            if (gap < side_diff) {
                // Not possible to reach the required side on time
                total_points = -1;
                break;
            }

            // Max moves in this gap = gap - side_diff (saving 1 minute for switching if needed)
            total_points += (gap - side_diff);

            // Update for next iteration
            prev_time = a[i];
            prev_side = b[i];
        }

        if (total_points == -1) {
            cout << 0 << '\n';  // Can't satisfy constraints, so no points
            continue;
        }

        // Add remaining time after last requirement (can move freely)
        total_points += (m - prev_time);

        cout << total_points << '\n';
    }

    return 0;
}
