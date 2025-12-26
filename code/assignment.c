#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <inttypes.h>

int main() {
    float f = 7.45f;
    double d = 7.45;

    uint32_t f_bits;
    uint64_t d_bits;

    memcpy(&f_bits, &f, sizeof(f));
    memcpy(&d_bits, &d, sizeof(f));

    printf("Float bits: 0x%08x \n", f_bits);
    printf("Double bits: 0x%016x \n", d_bits);

}