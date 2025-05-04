#include <stdio.h>
#include <stdlib.h>

typedef union
{
    int a;
    float b;
    char c;
}test;


int main(){
    test t1;
    printf("a = %d ------ b = %g ------ c = %c\n",t1.a,t1.b,t1.c);
    printf("Enter integer value a : ");
    scanf("%d",&(t1.a));
    printf("a = %d ------ b = %g ------ c = %c\n",t1.a,t1.b,t1.c);
    printf("Enter float value b : ");
    scanf("%f",&(t1.b));
    printf("a = %d ------ b = %g ------ c = %c\n",t1.a,t1.b,t1.c);
    printf("Enter character value c : ");
    scanf(" 5%c",&(t1.c));
    printf("a = %d ------ b = %g ------ c = %c\n",t1.a,t1.b,t1.c);

    return 0;
}