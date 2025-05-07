#include <stdio.h>
#include <stdlib.h>


void ptr_init(int n1, int n2, int *ptr);
void ptr_print(int n, int *ptr);

int main(){
    int n, sum = 0;
    printf("enter length to generate using DMA : ");
    scanf("%d", &n);
    
    int *ptr1 = (int *)malloc(n*sizeof(int));
    if(NULL == ptr1)
        printf("Allocation Error!\n");
    else{
        ptr_init(0, n, ptr1);
        for (int i = 0; i < n; i++)
        {
            sum += *(ptr1+i);
        }
        printf("The Sum of all elements = %d\n", sum);
        free(ptr1);
    }

    return 0;
}

void ptr_init(int n1, int n2, int *ptr){
    for (int i = n1; i < n2; i++)
    {
        scanf("%d", (ptr + i));
    }
    
}

void ptr_print(int n, int *ptr){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
}