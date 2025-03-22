#include <stdio.h>
#include <stdlib.h>

// Global variables stored in .bss segment initial value = 0;
int min,max,num;

int main(){

    while (num != -1)
    {
        scanf("%d",&num);
        
        // Check if the num != 0 to be sure -1 not a value in min or max value 
        if(num > max && num != -1){max = num;}
        if(num < min && num != -1){min = num;}
    }
    printf("%d %d",max,min);

    return 0;
}