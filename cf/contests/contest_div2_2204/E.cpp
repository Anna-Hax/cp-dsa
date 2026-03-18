#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using namespace std;

int get_digit_sum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void modify_counts(vector<int>& counts, int n, int delta) {
    string s = to_string(n);
    for (char c : s) {
        counts[c - '0'] += delta;
    }
}

void myfun(string s) {
    if (s.length() == 1) {
        cout << s << "\n";
        return;
    }
    vector<int> total_counts(10, 0);
    for (char c : s) total_counts[c - '0']++;

    for (int y = 10; y <= 900000; ++y) {
        vector<int> current_counts = total_counts;
        bool possible = true;
        
        int tempY = y;
        while (true) {
            string y_str = to_string(tempY);
            for (char c : y_str) {
                if (--current_counts[c - '0'] < 0) {
                    possible = false;
                    break;
                }
            }
            if (!possible) break;
            tempY = get_digit_sum(tempY);
        }

        if (possible) {
            long long remaining_sum = 0;
            for (int i = 0; i < 10; ++i) {
                remaining_sum += (long long)i * current_counts[i];
            }

            if (remaining_sum == y) {
                string x_str = "";
                for (int i = 1; i <= 9; ++i) {
                    if (current_counts[i] > 0) {
                        x_str += (char)('0' + i);
                        current_counts[i]--;
                        break;
                    }
                }
                for (int i = 0; i <= 9; ++i) {
                    while (current_counts[i]-- > 0) {
                        x_str += (char)('0' + i);
                    }
                }

                string tail = "";
                tempY = y;
                while (true) {
                    tail += to_string(tempY);
                    if (tempY <= 9) break;
                    tempY = get_digit_sum(tempY);
                }
                
                cout << x_str << tail << "\n";
                return;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        myfun(s);
    }
    return 0;
}