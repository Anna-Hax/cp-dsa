#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m;
    if (!(cin >> n >> m)) return;

    vector<vector<int>> arr(n, vector<int>(m));
    ll total_sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            total_sum += arr[i][j];
        }
    }

    ll target = total_sum / 2;

  
    vector<ll> row_sum(n + 1, 0);
    for (int i = n - 1; i >= 0; i--) {
        ll current_row_total = 0;
        for (int j = 0; j < m; j++) current_row_total += arr[i][j];
        row_sum[i] = row_sum[i + 1] + current_row_total;
    }

    string path = "";
    ll current_ones = 0;
    int j = 0; 

    for (int i = 0; i < n; i++) {
        ll abhi_ones = 0;
        for (int k = 0; k < j; k++) {
            abhi_ones += arr[i][k];
        }

        while (j < m) {
          
            if (current_ones + abhi_ones + row_sum[i + 1] >= target) {
                break;
            }
            abhi_ones += arr[i][j];
            j++;
            path += 'R';
        }

        path += 'D';
        current_ones += abhi_ones;
    }

    while (j < m) {
        path += 'R';
        j++;
    }

    ll a = current_ones;
    ll b = total_sum - a;
    cout << (a * b) << endl;
    cout << path << endl;
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