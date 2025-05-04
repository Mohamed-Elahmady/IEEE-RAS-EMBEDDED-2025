#include <stdio.h>
#include <stdlib.h>

int n;

typedef struct 
{
    int *ptr;
    int counter;
}ret_vals;

void arr_init(int *ptr, int n);
void arr_print(int *ptr, int n);
ret_vals ret_odd(int *ptr, int n);

int main(){
    scanf("%d",&n);
    int *ptr = (int *)malloc(n* sizeof(int));
    arr_init(ptr, n);
    ret_vals vals = ret_odd(ptr, n);
    arr_print(vals.ptr, vals.counter);
    printf("Total odd numbers: %d", vals.counter);
    return 0;
}

void arr_init(int *ptr, int n){
    for (int i = 0; i < n; i++)
    {
        scanf("%d",(ptr+i));
    }
    
}

void arr_print(int *ptr, int n){
    printf("Odd numbers are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("\n");
}

ret_vals ret_odd(int *ptr, int n){
    ret_vals values;
    values.ptr = (int *)malloc(n*sizeof(n));
    values.counter = 0;
    for (int i = 0;i < n;i++)
    {
        if (*(ptr + i)%2  != 0)
        {
            *(values.ptr+(values.counter)) = *(ptr+i);
            values.counter++;
        }
    }
    return values;
}