#include <stdio.h>
#include <stdlib.h>

int n1;
int n2;

int main(){
    scanf("%d %d",&n1,&n2);
    int *ptr1 = &n1, *ptr2 = &n2;
    printf("Sum = %d\nDifference = %d\nProduct = %d\nQuotient = %d\n",(*ptr1 + *ptr2),(*ptr1 - *ptr2),(*ptr1 * *ptr2),(*ptr1 / *ptr2));

    return 0;
}