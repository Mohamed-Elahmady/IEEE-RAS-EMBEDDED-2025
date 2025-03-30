#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define V_H_Value (pow(2,31) - 1)

int main(){
    
    int min = V_H_Value, max = 0, num;

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