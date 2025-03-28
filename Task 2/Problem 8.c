#include <stdio.h>
#include <stdlib.h>

int num;

int n_sequence(int num);

int main(){
    scanf("%d",&num);
    printf("%d",n_sequence(num));
    return 0;
}

int n_sequence(int num){
    if(num == 1)
        return 1;
    else if (num%2 ==0)
        return (1+n_sequence((num/2)));
    else
        return (1+n_sequence((3*num)+1));
}