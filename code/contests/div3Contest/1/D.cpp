#include <iostream>
using namespace std;

int can_vanya_win(int k) {
    int sum = 0;
    int count = 1;
    int digit_count = 0;

    while (digit_count < k) {
        int num = count;
        int digits[10];
        int len = 0;

        // Extract digits of num in reverse order
        while (num > 0) {
            digits[len++] = num % 10;
            num /= 10;
        }

        // Traverse digits from most significant to least
        for (int i = len - 1; i >= 0 && digit_count < k; --i) {
            sum += digits[i];
            digit_count++;
        }

        count++;
    }

    return sum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;
        cout << can_vanya_win(k) << endl;
    }

    return 0;
}
