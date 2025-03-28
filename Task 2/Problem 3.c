#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define CON_BIN(num, pos) ((num >> pos) & 0x01)

bool wonderful_number(long long num);

int main() {
    long long num;
    scanf("%lld", &num);

    if (wonderful_number(num))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

bool wonderful_number(long long num) {
    bool retval;
    if (num % 2 == 0) {
        retval = false;
    } 
    else {
        long long temp = num, Bin_digits = 0;

        while (temp > 0) {
            temp >>= 1;
            Bin_digits++;
        }
        retval = true;
        for (long long i = 0; i < Bin_digits / 2; i++) {
            if (CON_BIN(num, i) != CON_BIN(num, Bin_digits - i - 1)) {
                retval = false;
                break;
            }
        }
    }

    return retval;
}
