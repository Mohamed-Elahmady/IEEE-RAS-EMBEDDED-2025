#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int num1,num2;

bool check_div(int n1,int n2);

int main(){
    scanf("%d %d",&num1,&num2);
    if(check_div(num1,num2)){
        printf("%d is divisible by %d\n",num1,num2);
    }else
    {
        printf("%d is not divisible by %d\n",num1,num2);
    }
    
    return 0;
}

bool check_div(int n1,int n2){
    bool retval = false;
    if(n1%n2 == 0)
        retval = true;
    else
        retval = false;
    return retval;
}