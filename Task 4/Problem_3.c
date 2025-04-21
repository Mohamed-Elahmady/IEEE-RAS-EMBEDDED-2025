#include <stdio.h>
#include <stdlib.h>

int n1;
int n2;

void swap(int *ptr1, int *ptr2);

int main(){
    scanf("%d %d",&n1,&n2);
    swap(&n1,&n2);
    printf("a: %d\nb: %d\n",n1,n2);

    return 0;
}

void swap(int *ptr1, int *ptr2){
    *ptr1 ^= *ptr2;
    *ptr2 ^= *ptr1;
    *ptr1 ^= *ptr2;
}