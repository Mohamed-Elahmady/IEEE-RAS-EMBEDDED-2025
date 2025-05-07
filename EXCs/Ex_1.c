#include <stdio.h>
#include <stdlib.h>

void ptr_init(int *ptr, int n);
void Bubble_Sort(int *ptr, int n);
void swap(int *x, int *y);
void print_ptr(int *ptr, int n);

int main(){
    int n, *ptr;
    scanf("%d",&n);
    ptr = (int *)malloc(n * sizeof(int));
    ptr_init(ptr, n);
    print_ptr(ptr, n);
    Bubble_Sort(ptr, n);
    print_ptr(ptr, n);
}

void ptr_init(int *ptr, int n){
    for (int i = 0; i < n; i++)
    {
        scanf("%d",(ptr+i));
    }
    
}

void print_ptr(int *ptr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d, ",*(ptr+i));
    }
    printf("\n");
}

void Bubble_Sort(int *ptr, int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (*(ptr+i) < *(ptr+j))
            {
                swap((ptr+i),(ptr+j));
            }
            
        }
        
    }
    
}

void swap(int *x, int *y){
    *x ^= *y;
    *y ^= *x;
    *x ^= *y; 
}