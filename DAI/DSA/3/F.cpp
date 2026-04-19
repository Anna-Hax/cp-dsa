#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;


void execute_test_case() {
    int str_len, num_queries;
    if (!(cin >> str_len >> num_queries)) return;

    string binary_str;
    cin >> binary_str;

    vector<int> first_one_at_or_after(str_len + 1, str_len);
    vector<int> last_zero_at_or_before(str_len + 1, -1);

    int recent_zero = -1;
    for (int i = 0; i < str_len; ++i) {
        if (binary_str[i] == '0') {
            recent_zero = i;
        }
        last_zero_at_or_before[i] = recent_zero;
    }

    int upcoming_one = str_len;
    for (int i = str_len - 1; i >= 0; --i) {
        if (binary_str[i] == '1') {
            upcoming_one = i;
        }
        first_one_at_or_after[i] = upcoming_one;
    }

    set<pair<int, int>> distinct_modified_ranges;
    bool has_identity_transformation = false;

    for (int i = 0; i < num_queries; ++i) {
        int query_l, query_r;
        cin >> query_l >> query_r;
        
        int start = query_l - 1;
        int end = query_r - 1;

        int effective_left = first_one_at_or_after[start];
        int effective_right = last_zero_at_or_before[end];

        if (effective_left >= effective_right) {
            has_identity_transformation = true;
        } else {
            distinct_modified_ranges.insert({effective_left, effective_right});
        }
    }

    int result = distinct_modified_ranges.size() + (has_identity_transformation ? 1 : 0);
    cout << result << "\n";
}

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_count;
    if (cin >> test_count) {
        while (test_count--) {
            execute_test_case();
        }
    }

    return 0;
}