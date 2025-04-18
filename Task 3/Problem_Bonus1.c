#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int n,min,freq;

void array_init(int arr[n],int len);
void print_array(int arr[n],int len);

int main(){
   scanf("%d",&n);
    int arr[n];
    array_init(arr, n);
    min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(min > arr[i]){
            min = arr[i];
            freq = 1;
        }
        else if (min == arr[i])
        {
            freq++;
        }
        
    }
    printf("%s\n",(freq % 2 != 0) ? "Lucky":"Unlucky");

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