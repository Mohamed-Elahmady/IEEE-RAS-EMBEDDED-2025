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
void print_sizes_of_struct(Dog Puppy);

int main(){
    Dog BOB;
    struct_init(&BOB);
    struct_print(BOB);
    print_sizes_of_struct(BOB);
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

void print_sizes_of_struct(Dog Puppy){
    // ============== Size Analysis of the Struct ============= //
    //    Each Pointer has the size 8 Byte                      //
    //    that means the struct = 4*8 = 32 Byte                 //
    //    and 4 Byte for the age ==> struct = 36                //
    //    but why the struct size = 40                          //
    //    that because the largest element is 8 byte            //
    //    that causes 4 byte padding and the struct = 40 byte   //
    //////////////////////////////////////////////////////////////
    printf("Size of Dog Name = %ld\n",sizeof(Puppy.name));
    printf("Size of Owner Name = %ld\n",sizeof(Puppy.owner_Name));
    printf("Size of age = %ld\n",sizeof(Puppy.age));
    printf("Size of kind = %ld\n",sizeof(Puppy.kind));
    printf("Size of food = %ld\n",sizeof(Puppy.food));
    printf("Size of Dog = %ld\n",sizeof(Puppy));

}