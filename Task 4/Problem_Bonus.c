#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *a;
int *ptr;

int main(){
    a = (int *)malloc(sizeof(int));
    printf("Enter address to access using pointer : ");
    scanf("%p",a);
    ptr = a;
    *ptr = 22;
    printf("The address that stored in pointer = %p",ptr);
    printf("The value that stored in the address %p = %d",ptr,*ptr);
    printf("The address of the pointer = %p",&ptr);

    return 0;
}

