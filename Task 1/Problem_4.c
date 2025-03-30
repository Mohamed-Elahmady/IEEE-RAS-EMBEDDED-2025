#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Global variables stored in .bss segment initial value = 0;
char a[40];
int len,counter;

int main(){    
    scanf("%[^\n]%*c",a);
    //printf("%d\n",strlen(a));
    len = strlen(a);
    for (int i = 0; i < (len/2)+1; i++)
    {
        // check if the character == the Opposite character
        // if the condition happened counter will be increment
        // else the condition will be decrement 
        if (*(a+i) == *(a+len-i-1)){counter++;}
        else{counter--;}
    }

    // printf("%d----%d",counter,((strlen(a)/2)+1));
    
    // if the counter == (0.5 * string length) + 1 the statement is palindrome
    if (counter == (strlen(a)/2+1))
    {
        printf("The word \'%s\' is a palindrome.\n",a);
    }
    else
    {
        printf("The word \'%s\' is not a palindrome.\n",a);
    }
    
    return 0;
}