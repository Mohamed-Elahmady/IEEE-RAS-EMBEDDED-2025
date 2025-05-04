#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct
{
    int day,month,year;
}Date;


void struct_init(Date *D1);
void struct_print(Date D1);
bool compare_day(Date D1, Date D2);

int main(){
    Date D1,D2;
    struct_init(&D1);
    struct_init(&D2);
    if (compare_day(D1,D2))
        printf("They are the Same Date :)\n");
    else
        printf("They are not the Same Date :*(\n");
    
    return 0;
}

void struct_init(Date *D1){
    printf("Enter Date as \"Day/month/Year\" : ");
    scanf("%d/%d/%d",&(D1->day),&(D1->month),&(D1->year));
}
void struct_print(Date D1){
    printf("Date is : %d/%d/%d\n",(D1.day),(D1.month),(D1.year));
}

bool compare_day(Date D1, Date D2){
    bool flag = false;
    if(D1.day == D2.day && D1.month == D2.month && D1.year == D2.year)
        flag = true;
    return flag;
}