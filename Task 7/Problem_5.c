#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef enum{
    ADD = 43,
    SUB = 45,
    MUP = 42,
    DIV = 47,
    AND = 36,
    OR = 124,
    NOT = 33
}OP_Code;

int calculator(int n1, int n2, OP_Code op);

int main(){
    OP_Code op;
    int n1,n2,sum;
    printf("Enter n1, n2, op : ");
    scanf("%d %d %d", &n1, &n2, (int *)&op);
    sum = calculator(n1, n2, op);
    printf("sum = %d\n",sum);
    return 0;
}

int calculator(int n1, int n2, OP_Code op){
    switch (op)
    {
    case ADD:
        return (n1 + n2);
        break;
    case SUB:
        return (n1 - n2);
    case MUP:
        return (n1 * n2);
    case DIV:
        return (n1 / n2);
    case AND:
        return (n1 & n2);
    case OR:
        return (n1 | n2);
    case NOT:
        return (!n1);
    default:
        printf("invalid op_code ;(\n");
        break;
    }
    return -1;
}