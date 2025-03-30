#include <stdio.h>
#include <stdlib.h>

// Global variables stored in .bss segment initial value = 0;
int num,sum;

int main(){    

    scanf("%d",&num);
    for (int i = 1; i < num; i++)
    {
        // calculate all divisors of the number to check if it is a perfect number
        if(num%i == 0){
            // printf("%d\n",i);
            sum += i;
        }
        else{continue;}
    }
    
    if(sum == num){
        printf("%d is a perfect number",num);
    }else
    {
        printf("%d is not a perfect number",num);
    }
    

    return 0;
}