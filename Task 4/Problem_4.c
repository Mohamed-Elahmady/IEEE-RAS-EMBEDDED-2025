#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *str = "0123456789";

void str_is_even(char *string);

int main(){
    str_is_even(str);    
    return 0;
}

void str_is_even(char *string){
    for(int i = 0; i < strlen(string)-1;i++){
        if(*(string+i) % 2 == 0 && isdigit(*(string+i))){
            printf("%c",*(string+i));
        }
    }
}