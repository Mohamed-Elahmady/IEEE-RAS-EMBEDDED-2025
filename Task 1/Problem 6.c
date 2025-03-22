#include <stdio.h>
#include <stdlib.h>

// Global variables stored in .bss segment initial value = 0;
int num;

int main() {    

    scanf("%d", &num);
    
    for (int i = 1; i <= num; i++) {

        // Check if 'i' is a divisor of 'num' (i.e., num % i == 0)
        if (num % i == 0) {
            printf("%d\n", i);
        } else {
            continue;
        }
    }
    
    return 0;
}
