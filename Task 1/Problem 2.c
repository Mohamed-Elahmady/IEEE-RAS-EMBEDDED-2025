#include <stdio.h>
#include <stdlib.h>

// Preprocessored Macros instead of enter decimal values each time
#define YEARS_D   365
#define MONTHS_D  30

// Global variables stored in .bss segment initial value = 0;
int num,ys,mn,dy;

int main(){

    scanf("%d",&num);

    // Loop to convert the number of days into years, months, and remaining days
    while (num != 0)
    {
        // Check if the number of days is greater than or equal to a year
        if(num >= YEARS_D){
            num -= YEARS_D;
            ys++;
        }
        // Check if the remaining days fit into a month
        else if(num < YEARS_D && num >= MONTHS_D){
            num -= MONTHS_D;
            mn++;
        }
        // Remaining days that are less than a month
        else{
            dy = num;
            num = 0;
        }
    }
    printf("%d years\n%d months\n%d days\n",ys,mn,dy);
    
    return 0;
}