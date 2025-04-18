#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int n,counter = 1;

void array_init(char arr[n], int len);
void print_array(char arr[n],int len);

int main(){
    scanf("%d",&n);
    char arr[n];
    array_init(arr,n);
    for (int i = 1; i < n; i++)
    {
        if(arr[i] != arr[i-1]){
            counter++;
        }
        
    }
    printf("%d",counter);
    
    return 0;
}

void array_init(char arr[n],int len){
    for (int i = 0; i < n; i++){
        scanf(" %c",&arr[i]);
    }
}

void print_array(char arr[n],int len){
    for (int i = 0; i < len; i++){
        printf("%c ",arr[i]);
    }
}
