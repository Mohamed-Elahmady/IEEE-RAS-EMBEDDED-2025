#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// Global variables stored in .bss segment initial value = 0;
int num,sum;

int check_prime(int num);

int main(){    

    scanf("%d",&num);
    while (num > 0)
    {
        //calculate the sum of the digits
        sum += num%10;
        num /= 10;
    }
    
    if(check_prime(sum)){
        printf("The sum of digits (%d) is a prime number.",sum);
    }else{
        printf("The sum of digits (%d) is not a prime number.",sum);
    }
    
    return 0;
}

int check_prime(int num){
    bool retval = false,temp = 0;
    if (num == 2)
    {
        temp = 0;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        // check if the number is divisible by any number before it
        // if true => not prime number
        if (num%i == 0)
        {
            temp++;
            break;
        }
    }
    if (temp == 0)
    {
        retval = true;
    }
    else
    {
        retval = false;
    }
    return retval;
}