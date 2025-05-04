#include <stdio.h>
#include <stdlib.h>

#define String_len 1000

typedef struct 
{
    char *name;
    char *owner_Name;
    char *kind;
    char *food;
    int age;
}Dog,Cat;

void struct_init(Cat *Kitty);
void struct_print(Cat Kitty);
void KILL_THE_CAT(Cat *Kitty);

int main(){
    Cat Tom;
    struct_init(&Tom);
    struct_print(Tom);
    KILL_THE_CAT(&Tom);
    struct_print(Tom);
    return 0;
}

void struct_init(Cat *Kitty){
    Kitty->name = (char *)malloc(String_len * sizeof(char));
    Kitty->owner_Name = (char *)malloc(String_len * sizeof(char));
    Kitty->kind = (char *)malloc(String_len * sizeof(char));
    Kitty->food = (char *)malloc(String_len * sizeof(char));

    printf("Enter Cat Name : ");
    scanf("%[^\n]%*c",Kitty->name);
    printf("Enter Owner Name : ");
    scanf("%[^\n]%*c",Kitty->owner_Name);
    printf("Enter Cat age : ");
    scanf("%d%*c",&(Kitty->age));
    printf("Enter Cat Kind : ");
    scanf("%[^\n]%*c",Kitty->kind);
    printf("Enter Cat Food : ");
    scanf("%[^\n]%*c",Kitty->food);
}

void struct_print(Cat Kitty){
    printf("Data about this Cat : \n");
    printf("=============================================\n");
    printf("Name : %s\n",Kitty.name);
    printf("Owner Name : %s\n",Kitty.owner_Name);
    printf("age : %d\n",Kitty.age);
    printf("Kind : %s\n",Kitty.kind);
    printf("Food : %s\n",Kitty.food);
    printf("=============================================\n");
}

void KILL_THE_CAT(Cat *Kitty){
    free(Kitty->name);
    free(Kitty->owner_Name);
    free(Kitty->kind);
    free(Kitty->food);
    printf("You Killed The Cat :*(\n");
}