#include <stdio.h>
#include <stdlib.h>

// #define Ascending       0x00
#define Descending      0x01

#if defined Ascending
    #define Operation       (Ascending)
#elif defined Descending
    #define Operation       (Descending)
#else
    #error "Please define either Ascending or Descending"
#endif

void arr_init(int n, int arr[n]);
void arr_print(int n, int arr[n]);
void sort_Ascending(int n, int arr[n]);
void sort_Descending(int n, int arr[n]);    
void Swap(int *x, int *y);

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    arr_init(n, arr);
    #if Operation == Ascending
    sort_Ascending(n, arr);
    #elif Operation == Descending
    sort_Descending(n, arr);
    #endif
    arr_print(n, arr);
    
    return 0;
}

void arr_init(int n, int arr[n]){
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
}

void arr_print(int n, int arr[n]){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sort_Ascending(int n, int arr[n]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (arr[i] < arr[j])
            {
                Swap(&arr[i], &arr[j]);
            }
        }
    }
}

void sort_Descending(int n, int arr[n]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (arr[i] > arr[j])
            {
                Swap(&arr[i], &arr[j]);
            }
        }
    }
}

void Swap(int *x, int *y){
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
}