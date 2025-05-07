#include <stdio.h>
#include <stdlib.h>

#define ADD     0x00
// #define SUB     0x01

#define add_op(n1, n2)      ((n1 + n2))
#define sub_op(n1, n2)      ((n1 - n2))

#if defined ADD
    #define Operation       (ADD)
#elif defined SUB
    #define Operation       (SUB)
#else
    #error "Please define either ADD or SUB"
#endif

int main(){
    int n1,n2,sum;
    printf("enter 2 operands to perform operation : ");
    scanf("%d %d", &n1, &n2);

    #if Operation == ADD
        sum = add_op(n1, n2);
    #elif Operation == SUB
        sum = sub_op(n1, n2);
    #endif
    printf("The Sum of n1,n2 = %d\n", sum);
    return 0;
}