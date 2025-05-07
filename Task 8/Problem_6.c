#include <stdio.h>
#include <stdlib.h>
#include "Problem_6.h"

int main(){
    OP op1;
    printf("enter 2 operands for operation : ");
    scanf("%d %d", &op1.n1, &op1.n2);
    printf("The addition of %d, %d = %d\n", op1.n1, op1.n2, add(op1.n1, op1.n2));
    printf("The Substraction of %d, %d = %d\n", op1.n1, op1.n2, sub(op1.n1, op1.n2));
    printf("The Multiplication of %d, %d = %d\n", op1.n1, op1.n2, mup(op1.n1, op1.n2));
    printf("The Division of %d, %d = %d\n", op1.n1, op1.n2, divi(op1.n1, op1.n2));
    printf("The Exponentiation of %d, %d = %d\n", op1.n1, op1.n2, expi(op1.n1, op1.n2));
    return 0;
}

int add(int n1, int n2){
    return (n1 + n2);
}
int sub(int n1, int n2){
    return (n1 - n2);
}
int mup(int n1, int n2){
    return (n1 * n2);
}
int divi(int n1, int n2){
    if (n2 == 0){
        printf("can't div by 0\n");
        return -1;
    }
    else
        return (n1 / n2);
}
int expi(int n1, int n2){
    if (n2 == 0)
        return 1;
    else if (n2 == 1)
        return n1;
    else
        return (n1 * expi(n1, n2-1));
}