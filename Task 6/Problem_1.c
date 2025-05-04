#include <stdio.h>
#include <stdlib.h>

#define String_len 100

typedef struct 
{
    char *name;
    char *owner_Name;
    char *kind;
    char *food;
    int age;
}Dog,Cat;


void struct_init(Dog *Puppy);
void struct_print(Dog Puppy);

int main(){
    Dog BOB;
    struct_init(&BOB);
    struct_print(BOB);
    return 0;
}

void struct_init(Dog *Puppy){
    Puppy->name = (char *)malloc(String_len * sizeof(char));
    Puppy->owner_Name = (char *)malloc(String_len * sizeof(char));
    Puppy->kind = (char *)malloc(String_len * sizeof(char));
    Puppy->food = (char *)malloc(String_len * sizeof(char));
    
    printf("Enter Dog Name : ");
    scanf("%[^\n]%*c",Puppy->name);
    printf("Enter Owner Name : ");
    scanf("%[^\n]%*c",Puppy->owner_Name);
    printf("Enter Dog Age : ");
    scanf("%d%*c",&(Puppy->age));
    printf("Enter Dog kind : ");
    scanf("%[^\n]%*c",Puppy->kind);
    printf("Enter Dog fav food : ");
    scanf("%[^\n]%*c",Puppy->food);
}

void struct_print(Dog Puppy){
    printf("Data about this Dog : \n");
    printf("=============================================\n");
    printf("Name : %s\n",Puppy.name);
    printf("Owner Name : %s\n",Puppy.owner_Name);
    printf("age : %d\n",Puppy.age);
    printf("kind : %s\n",Puppy.kind);
    printf("food : %s\n",Puppy.food);
    printf("=============================================\n");
}