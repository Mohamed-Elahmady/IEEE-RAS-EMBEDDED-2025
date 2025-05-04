#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define str_len 1000

char *str;
char *str_copied;
char *str_copy(char *string);

int main(){
    str = (char *)malloc(str_len * sizeof(char));
    str_copied = (char *)malloc(str_len * sizeof(char));
    scanf("%[^\n]%*c",str);
    
    str_copied = str_copy(str);
    printf("The copied String : %s\n",  str_copied);

    free(str);
    free(str_copied);
    
    return 0;
}

char *str_copy(char *string){
    char *str_copied;
    str_copied = (char *)malloc(str_len * sizeof(char));

    for(int i = 0; *(string +i) != '\0'; i++){
        *(str_copied+i) = *(string +i);
        if (*(string +i+1) == '\0')
        {
            *(str_copied+i+1) = '\0';
        }
        
    }
    // printf("The copied String : %s\n",  str_copied);
    return str_copied;
}