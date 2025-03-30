#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define Start_val 1

int num,num_r;

int Reach_Value(int num_c, int num_r);

int main(){
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&num_r);
        if (Reach_Value(Start_val, num_r))
            printf("YES");
        else
            printf("NO");
        break;
    }
    
    return 0;
}

int Reach_Value(int num_c, int num_r){
    if (num_c == num_r)
        return 1;
    if (num_c > num_r)
        return 0;    
    return Reach_Value(num_c*10, num_r)||Reach_Value(num_c*20, num_r);
}