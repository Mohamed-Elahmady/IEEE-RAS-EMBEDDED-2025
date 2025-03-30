#include <stdio.h>
#include <stdlib.h>

// Global variables stored in .bss segment initial value = 0;
int a, b, start, end;

int main() {

    while (scanf("%d %d", &a, &b) == 2) {
        if (a <= 0 || b <= 0) {
            break;
        }
        //check if the start & end is a or b
        start = (a < b) ? a : b;
        end = (a > b) ? a : b;
        int sum = 0;
        // calc the sum of consecutive numbers
        for (int i = start; i <= end; i++) {
            printf("%d ", i);
            sum += i;
        }
        printf("sum =%d\n", sum);
    }

    return 0;
}
