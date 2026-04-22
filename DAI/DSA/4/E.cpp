#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const long long kOneBase[17] = {
    0, 1, 11, 111, 1111, 11111, 111111, 1111111, 11111111,
    111111111, 1111111111, 11111111111, 111111111111, 1111111111111,
    11111111111111, 111111111111111, 1111111111111111
};

long long solve(long long input, int digit) {
    if (digit == 1) return input; 

    long long count = input / kOneBase[digit];
    long long remainder = input % kOneBase[digit];

    if (remainder == 0) {
        return count * digit;
    }

 
    return count * digit + min(solve(remainder, digit - 1), 
                               digit + solve(kOneBase[digit] - remainder, digit - 1));
}

int main() {
    // Speed up I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (cin >> n) {
        cout << solve(n, 16) << endl;
    }

    return 0;
}