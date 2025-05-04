#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define str_len 1000

char *str1,*str2;

bool str_comp(char *string1, char *string2);

int main(){
    str1 = (char *)malloc(str_len * sizeof(char));
    str2 = (char *)malloc(str_len * sizeof(char));
    scanf("%[^\n]%*c",str1);
    scanf("%[^\n]%*c",str2);

    if(str_comp(str1,str2))
        printf("Both strings are Identical\n");
    else
        printf("none of the strings are Identical\n");

}

bool str_comp(char *string1, char *string2){
    bool flag = true;
    
    if (strlen(string1) != strlen(string2))
        flag = false;
    
    for(int i = 0; i < strlen(string1); i++){
        if(*(string1+i) != *(string2+i)){
            flag = false;
            break;
        }
    }
    return flag;
}