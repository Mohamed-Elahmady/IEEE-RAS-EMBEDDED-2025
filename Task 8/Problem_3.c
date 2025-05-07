#include <stdio.h>
#include <stdlib.h>


void ptr_init(int n1, int n2, int *ptr);
void ptr_print(int n, int *ptr);

int main(){
    int n1, n2;
    printf("enter length to generate using DMA :");
    scanf("%d", &n1);
    
    int *ptr1 = (int *)malloc(n1*sizeof(int));
    if(NULL == ptr1)
        printf("Allocation Error!\n");
    else{
        int *ptr2 = (int *)calloc(n1, sizeof(int));
        if(NULL == ptr2)
            printf("Allocation Error!\n");
        else{
            ptr_init(0, n1, ptr1);
            ptr_init(0, n1, ptr2);
            ptr_print(n1, ptr1);
            ptr_print(n1, ptr2);

            printf("enter new memory to realloc ptr2 : ");
            scanf("%d", &n2);
            int *ptr3 = (int *)realloc(ptr2, n2 * sizeof(int));
            if(NULL == ptr3)
                printf("Allocation Error!\n");
            else{
                ptr_init(n1, n2, ptr3);
                ptr_print(n2, ptr3);

                free(ptr1);
                free(ptr2);
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