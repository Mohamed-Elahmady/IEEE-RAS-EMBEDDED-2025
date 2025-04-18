#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define Zero 0

int n, *ptr = NULL;
int min,pos;

int *array_init(int n);

int main(){
    scanf("%d",&n);
    ptr = array_init(n);
    min = ptr[Zero];
    for (int i = 0; i < n; i++)
    {
        if(min > ptr[i]){
            min = ptr[i];
            pos = i;
        }
    }
    printf("%d %d",min,(pos+1));
    
    return 0;
}

int *array_init(int n){
    // int arr[n];
    int *ptr = (int *)malloc(n * sizeof(int));
    if (NULL == ptr){
        return 0;
    }
    else{
        for (int i = 0; i < n; i++){
            scanf("%d",&ptr[i]);
        }
        return ptr;
    }
}

