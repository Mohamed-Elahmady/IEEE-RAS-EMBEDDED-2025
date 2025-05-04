#include <stdio.h>
#include <stdlib.h>

#define String_len 100

typedef struct 
{
    char name[String_len];
    int id;
    int age;
}Std;


void struct_init(Std *Std1);
void struct_print(Std Std1);

int main(){
    Std Ahmed;
    struct_init(&Ahmed);
    struct_print(Ahmed);
    return 0;
}

void struct_init(Std *Std1){
    printf("Enter Std Name : ");
    scanf("%[^\n]%*c",Std1->name);
    printf("Enter Std id : ");
    scanf("%d%*c",&(Std1->id));
    printf("Enter Std Age : ");
    scanf("%d%*c",&(Std1->age));
}

void struct_print(Std Std1){
    printf("Data about this Std : \n");
    printf("=============================================\n");
    printf("Name : %s\n",Std1.name);
    printf("ID : %d\n",Std1.id);
    printf("age : %d\n",Std1.age);
    printf("=============================================\n");
}