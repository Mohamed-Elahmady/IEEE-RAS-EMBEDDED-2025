#include <stdio.h>
#include <stdlib.h>

int num1,num2;

int GCD(int n1,int n2);

int main(){
    scanf("%d %d", &num1, &num2);
    printf("%d\n",GCD(num1,num2));
    return 0;
}

int GCD(int a,int b){
    if (b == 0)
    {
        return a;
    }
    else
    {
        return GCD(b,(a%b));
    }
}