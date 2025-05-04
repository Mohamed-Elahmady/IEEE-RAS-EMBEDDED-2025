#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define str_len 1000

int n;

void arr_init(int arr[], int len);
void arr_print(int arr[], int len);
void swap(int *x, int *y);
int *sort_asce(int *ptr, int len);
int *sort_desc(int *ptr, int len);    

int main(){
    
    scanf("%d",&n);
    int arr[n];
    int *arr_asc = (int *)malloc(n * sizeof(int));
    int *arr_des = (int *)malloc(n * sizeof(int));

    arr_init(arr,n);
    arr_asc = sort_asce(arr,n);
    arr_des = sort_desc(arr,n);

    printf("Array in ascending order: ");
    arr_print(arr_asc,n);
    printf("Array in descending order: ");
    arr_print(arr_des,n);

    free(arr_asc);
    free(arr_des);

    return 0;
}

void arr_init(int arr[], int len){
    for (int i = 0; i < len; i++)
        scanf("%d",&arr[i]);
}

void arr_print(int arr[], int len){
    for (int i = 0; i < len; i++)
        printf("%d, ",arr[i]);
    printf("\n");
}

void swap(int *x, int *y){
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
}

int *sort_asce(int *ptr, int len){
    int *ptr_cop = (int *)malloc(len * sizeof(int));
    for (int i = 0; i < len; i++)
        *(ptr_cop+i) = *(ptr+i);
    
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len-1; j++)
        {
            if (*(ptr_cop+i) < *(ptr_cop+j))
                swap((ptr_cop+i),(ptr_cop+j));
        }
    }
    return ptr_cop;
}

int *sort_desc(int *ptr, int len){
    int *ptr_cop = (int *)malloc(len * sizeof(int));
    for (int i = 0; i < len; i++)
        *(ptr_cop+i) = *(ptr+i);
    
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len-1; j++)
        {
            if (*(ptr_cop+i) > *(ptr_cop+j))
                swap((ptr_cop+i),(ptr_cop+j));
        }
    }
    return ptr_cop;
}