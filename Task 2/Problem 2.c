#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int num;

bool check_armstrong(int num);
void print_armstrong(int num);

int main(){
    scanf("%d",&num);
    print_armstrong(num);    
    return 0;
}

bool check_armstrong(int num){
    bool retval = false;
    int exp = 0,sum = 0;
    int temp = num ,digit;
    
    exp = (int)ceil(log10(num));

    while (num > 0)
    {
        digit = num%10;
        sum += (int)pow(digit,exp);
        num /= 10;
    }

    if (sum == temp)
        retval = true;
    else
        retval = false;

    return retval;
}

void print_armstrong(int num){
    bool first = true;
    printf("Armstrong numbers between 1 to 1000 are: ");
    for (int i = 1; i <= num; i++)
    {
        if (check_armstrong(i))
        {
            if(!first){
                printf(",");
            }
            printf(" %d",i);
            first = false;
        }
    }
}