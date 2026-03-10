#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int b[100];
    int max_val = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
        if (b[i] > max_val) {
            max_val = b[i];
        }
    }

    long long total_coins = 0;
    for (int i = 0; i < n; i++) {
        total_coins += (max_val - b[i]);
    }

    printf("%lld\n", total_coins);

    return 0;
}