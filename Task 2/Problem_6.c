#include <stdio.h>
#include <stdlib.h>

int num;

int fibonachi(int num);
void check_fibo(int p1,int p2,int p3);
void print_fibo(int num);

int main(){
    scanf("%d",&num);
    printf("%d",fibonachi(num));
    // print_fibo(num);
    return 0;
}

int fibonachi(int num){
    if (num == 1)
        return 0;
    else if (num == 2)
        return 1;
    else
        return fibonachi(num-1)+fibonachi(num-2);
}

// void check_fibo(int p1,int p2,int p3){
//     if(p3 < 3){
//         return;
//     }
//     int current = p1+p2;
//     printf("%d ",current);
//     check_fibo(p2,current,p3-1);
// }

// void print_fibo(int num){
//     int p1 = 0,p2 = 1;
//     if (num == 1)
//     {
//         printf("%d", p1);
//     }
//     else if (num == 2)
//     {
//         printf("%d %d", p1, p2);
//     }
//     else
//     {
//         printf("%d %d ",p1,p2);
//         check_fibo(p1, p2, num-2);
//     }
// }