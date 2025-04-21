#include <stdio.h>
#include <stdlib.h>

char *ptr1 = NULL;
int *ptr2 = NULL;
long *ptr3 = NULL;
float *ptr4 = NULL;

char n1;
int n2;
long n3;
float n4;

int main(){
    scanf("%c %d %ld %f",&n1,&n2,&n3,&n4);
    ptr1 = &n1; // pointer access the address of n1
    ptr2 = &n2;
    ptr3 = &n3;
    ptr4 = &n4;

    // Now we can access The address of variables by variable using refrence operator &
    printf("%#x--%#x--%#x--%#x\n",&n1,&n2,&n3,&n4);
    // or using pointer
    printf("%#x--%#x--%#x--%#x\n",ptr1,ptr2,ptr3,ptr4);
    // Now we can access The values of variables by variable
    printf("%c--%d--%ld--%f\n",n1,n2,n3,n4);
    // or using pointer by derefrence operator *
    printf("%c--%d--%ld--%f\n",*ptr1,*ptr2,*ptr3,*ptr4);

    // and u can also chang the vlaue of the variable using only the pointer
    *ptr2 = 28;
    printf("%d\n",n2); // now n2 = 28

    return 0;
}