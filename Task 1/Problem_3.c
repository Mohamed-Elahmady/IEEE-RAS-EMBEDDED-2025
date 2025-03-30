#include <stdio.h>
#include <stdlib.h>

// Global variables stored in .bss segment initial value = 0;
long long a,b,c,d;

int main(){    
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    // calculate the last 2 digits from the value after multiplication
    printf("%02lld",(a * b % 100) * (c * d % 100) % 100);

    return 0;
}