#include <stdio.h>
#include <stdlib.h>

int num = 0;

void move_in_array(int arr[num],int num);
void print_digit(int num);

int main(){
    scanf("%d",&num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
    move_in_array(arr,num);

    return 0;
}

void move_in_array(int arr[num],int num){
    for (int i = 0; i < num; i++)
    {
        print_digit(arr[i]);
        printf("\n");
    }
}

void print_digit(int num){
    if (num < 10)
    {
        printf("%d ",num);
    }
    else
    {
        print_digit(num/10);
        printf("%d ",num%10);
    }
    
    
}