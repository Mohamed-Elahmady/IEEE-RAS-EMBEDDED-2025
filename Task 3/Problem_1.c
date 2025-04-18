#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define Not_Found -1

long long n, *ptr = NULL,value,pos = Not_Found;

long long *array_init(long long n);

int main(){
    scanf("%lld",&n);
    ptr = array_init(n);
    scanf("%lld",&value);
    for (int i = 0;i < n;i++){
        if(value == ptr[i]){
            pos = i;
            printf("%d",i);
            break;
        }
    }
    if (pos == Not_Found){
        printf("%lld",pos);
    }
    
    return 0;

}

long long *array_init(long long n){
    // int arr[n];
    long long *ptr = (long long *)malloc(n * sizeof(long long));
    if (NULL == ptr){
        return 0;
    }
    else{
        for (int i = 0; i < n; i++){
            scanf("%lld",&ptr[i]);
        }
        return ptr;
    }
}

