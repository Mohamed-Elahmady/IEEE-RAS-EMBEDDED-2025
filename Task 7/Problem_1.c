#include <stdio.h>
#include <stdlib.h>

#define Std_num 5
#define Str_len 1000

typedef struct 
{
    char *name;
    char *Address;
    unsigned int age              :8; // 0 -> 255
    unsigned int roll_number      :4; // 0 -> 31
    unsigned int marks            :3; // 0 -> 7 
}Std;

void struct_init(Std Students[Std_num]);
void struct_print(Std Students[Std_num]);

int main(){
    Std Students[Std_num];

    struct_init(Students);
    struct_print(Students);

    return 0;
}

void struct_init(Std Students[Std_num]){
    for (int i = 0; i < Std_num; i++)
    {
        unsigned int input;
        Students[i].name = (char *)malloc(Str_len*sizeof(char));
        Students[i].Address = (char *)malloc(Str_len*sizeof(char));

        printf("Enter Std[%d] Name : ",(i+1));
        scanf(" %[^\n]%*c",(Students[i].name));

        printf("Enter Std[%d] Address : ",(i+1));
        scanf(" %[^\n]%*c",(Students[i].Address));

        printf("Enter Std[%d] age : ",(i+1));
        scanf("%d",&input);
        Students[i].age = input>255?-1:input;

        printf("Enter Std[%d] roll number : ",(i+1));
        scanf("%d",&input);
        Students[i].roll_number = input>31?-1:input;

        printf("Enter Std[%d] marks : ",(i+1));
        scanf("%d",&input);
        Students[i].marks = input>7?-1:input;
    }
    
}

void struct_print(Std Students[Std_num]){
    printf("===================================================\n");
    for (int i = 0; i < Std_num; i++)
    {
        printf("The Std[%d] Name is : %s\n", (i+1), Students[i].name);
        printf("The Std[%d] Address is : %s\n", (i+1), Students[i].Address);
        printf("The Std[%d] age is : %d\n", (i+1), Students[i].age);
        printf("The Std[%d] roll number is : %d\n", (i+1), Students[i].roll_number);
        printf("The Std[%d] marks is : %d\n", (i+1), Students[i].marks);
    }
    printf("===================================================\n");

}