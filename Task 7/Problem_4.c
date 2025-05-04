#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef enum{
    Friday = 0,
    Saturday,
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday
}Week;

bool check_weekend(Week Day);

int main(){
    Week Day;
    printf("Enter The day of the Week : ");
    scanf("%d",(int *)&Day);
    if (Day < Friday || Day > Thursday)
    {
        printf("Invalid Day ;(\n");
    }
    else
    {
        if(check_weekend(Day))
            printf("Weekend :)\n");
        else
            printf("Weekday ;(\n");
    }
    return 0;
}

bool check_weekend(Week Day){
    bool flag = false;
    if(Day == Friday || Day == Saturday)
        flag = true;
    return flag;
}