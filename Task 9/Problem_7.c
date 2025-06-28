#include <stdio.h>
#include <stdlib.h>

typedef struct Stack{
    int data;
    struct Stack* next;
}Stack;

void push(Stack** top, int value) {
    Stack* new_node = (Stack*)malloc(sizeof(Stack));
    new_node->data = value;
    new_node->next = *top;
    *top = new_node;
}

int pop(Stack** top) {
    if (*top == NULL) {
        printf("Stack is empty\n");
        return -1;
    }

    Stack* temp = *top;
    int popped = temp->data;
    *top = temp->next;
    free(temp);
    return popped;
}

int main() {
    Stack* stack = NULL;

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    int poppedValue = pop(&stack);
    printf("Popped value: %d\n", poppedValue);

    return 0;
}