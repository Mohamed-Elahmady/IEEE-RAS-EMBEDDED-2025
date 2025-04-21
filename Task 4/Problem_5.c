#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str;

int str_length(char *string);

int main(){
    str = (char *)malloc(1000 * sizeof(char));
    scanf("%[^\n]%*c",str);
    printf("Length = %d\n",str_length(str));    
    return 0;
}

int str_length(char *string){
    int counter = 0;
    for(int i = 0; *(string+i) != '\0';i++){
        counter++;
    }
    return counter;
}