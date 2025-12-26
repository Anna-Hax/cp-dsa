#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int len;
    cin >> len;

    long long expected_sum = (long long)len * (len + 1) / 2;
    long long actual_sum = 0;
    int num;

    for (int i = 0; i < len - 1; ++i) {
        cin >> num;
        actual_sum += num;
    }

    cout << (expected_sum - actual_sum) << '\n';

    return 0;
}
