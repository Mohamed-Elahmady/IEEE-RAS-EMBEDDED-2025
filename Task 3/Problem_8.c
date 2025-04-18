#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define Str_len 1000000

bool flag = false;
int counter = 0;
char str[Str_len];

int main(){
    
    scanf("%[^\n]%*c",str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if((*(str+i) >= 'a' && *(str+i) <= 'z') || (*(str+i) >= 'A' && *(str+i) <= 'Z')){
            if(!flag){
                flag = true;
                counter ++;
            }
        }
        else
        {
            flag = false;
        }
    }
    printf("%d",counter);
    
    return 0;
}
