#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a = 7;
int *aPtr = &a; // now we can access a using aPtr

int main(){

    printf("Address of a is %p\nValue of aPtr is %p\n\n", &a, aPtr); // &a, aptr => the address of a 
    printf("Value of a is %d\nValue of *aPtr is %d\n\n", a, *aPtr);  // a, *aPtr => the value that stored in a
    printf("Showing that * and & are complements of each other\n");
    printf("&*aPtr = %p\n*&aPtr = %p\n", &*aPtr, *&aPtr);     // &*aPtr => the address of a ,  *&aPtr => the address of aPtr 
    
    return 0;
}

