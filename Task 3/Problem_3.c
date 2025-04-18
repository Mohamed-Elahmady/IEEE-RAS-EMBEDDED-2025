#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int n;

void array_init(int arr[n], int len);
void print_array(int arr[n],int len);
void bubble_sort(int arr[],int len);
void swap(int *x, int *y);

int main(){
    scanf("%d",&n);
    int arr[n];
    array_init(arr,n);
    bubble_sort(arr,n);
    print_array(arr,n);

    return 0;
}

void array_init(int arr[n],int len){

    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}

void print_array(int arr[n],int len){
    for (int i = 0; i < len; i++){
        printf("%d ",arr[i]);
    }
}

void bubble_sort(int arr[],int len){
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len-1; j++)
        {
            if (arr[i] < arr[j])
            {
                swap(&arr[i], &arr[j]);
            }   
        }        
    }
}

void swap(int *x, int *y){
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
}