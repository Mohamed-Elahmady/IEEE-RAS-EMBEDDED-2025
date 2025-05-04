#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define str_len 1000

char *ptr =NULL;

typedef struct{
    char *ptr;
    int counter;
}vals;

vals convert_to_digit(char *ptr);
void print_ptr(vals values);    

int main(){
    ptr = (char *)malloc(str_len *sizeof(char));
    scanf("%[^\n]%*c", ptr);
    vals values = convert_to_digit(ptr);
    print_ptr(values);
    return 0;
}

vals convert_to_digit(char *ptr){
    vals values;
    values.ptr = (int *)malloc(strlen(ptr) * sizeof(int));
    values.counter = 0;
    for (int i = 0; i < strlen(ptr); i++){
        if (isdigit(*(ptr+i))){
            *(values.ptr+values.counter) = *(ptr+i) - '0';
            values.counter++;
        }
    }
    return values;
}

void print_ptr(vals values){
    for (int i = 0; i < values.counter; i++)
    {
        printf("%d",*(values.ptr + i));
    }
}