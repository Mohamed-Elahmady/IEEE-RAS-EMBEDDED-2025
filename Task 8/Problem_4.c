#include <stdio.h>
#include <stdlib.h>

void ptr_init(int n1, int n2, int *ptr);
void ptr_print(int n, int *ptr);

int main(){
    int n1, n2;
    printf("enter length to generate using DMA : ");
    scanf("%d", &n1);
    
    int *ptr1 = (int *)malloc(n1*sizeof(int));
    if(NULL == ptr1)
        printf("Allocation Error!\n");
    else{
        int *ptr2 = (int *)calloc(n1, sizeof(int));
        if(NULL == ptr1)
            printf("Allocation Error!\n");
        else{
            ptr_init(0, n1, ptr1);
            ptr_init(0, n1, ptr2);
            ptr_print(n1, ptr1);
            ptr_print(n1, ptr2);
            free(ptr2);

            printf("enter new big memory to allocate : ");
            scanf("%d",&n2);
            int *ptr3 = (int *)malloc(n2 * sizeof(int));
            if (NULL == ptr3)
                printf("n2 is too big number of bytes to allocate : ");
            else{
                ptr_init(0, n2, ptr3);
                ptr_print(n2, ptr3);
                free(ptr1);
                free(ptr3);
            }
        }
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