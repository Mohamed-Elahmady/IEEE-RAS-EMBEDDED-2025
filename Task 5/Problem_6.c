#include <stdio.h>
#include <stdlib.h>

int operation,n1,n2;

int add(int n1,int n2);
int sub(int n1,int n2);
int mup(int n1,int n2);
int divi(int n1,int n2);    

int (*ptr_fun)(int n1, int n2) = NULL;


int main(){
    printf("Select Operation : \n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter Your Choice: ");
    scanf("%d",&operation);
    printf("Enter Two Numbers: ");
    scanf("%d %d",&n1,&n2);
    switch (operation){
    case 1:
        ptr_fun = add;
        printf("Result: %d\n",ptr_fun(n1, n2));
        break;
    case 2:
        ptr_fun = sub;
        printf("Result: %d\n",ptr_fun(n1, n2));
        break;
    case 3:
        ptr_fun = mup;
        printf("Result: %d\n",ptr_fun(n1, n2));
        break;
    case 4:
        ptr_fun = divi;
        printf("Result: %d\n",ptr_fun(n1, n2));
        break;
    default:
        printf("invalid Operator!!\n");
        break;
    }
    return 0;
}

int add(int n1,int n2){
    return (n1+n2);
}

int sub(int n1,int n2){
    return (n1-n2);
}

int mup(int n1,int n2){
    return (n1*n2);
}

int divi(int n1,int n2){
    return (n1/n2);
}