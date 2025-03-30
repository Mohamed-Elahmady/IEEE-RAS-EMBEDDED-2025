#include <stdio.h>
#include <stdlib.h>

int num = 0;

void print_recursion(int num);

int main(){
    scanf("%d",&num);
    print_recursion(num);
    return 0;
}

void print_recursion(int num){
    if (num > 0)
    {
        print_recursion(num-1);
        printf("%d\n",num);
    }
}