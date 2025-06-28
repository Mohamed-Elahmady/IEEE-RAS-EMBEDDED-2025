#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
    int data;
    struct Stack* next;
} Stack;

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

void print_stack(Stack* top) {
    Stack* current = top;
    printf("Stack (top -> bottom): ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void swap_top(Stack** top) {
    if (*top == NULL || (*top)->next == NULL) {
        printf("Can't swap: Less than 2 elements\n");
        return;
    }

    Stack* first = *top;
    Stack* second = first->next;

    first->next = second->next;
    second->next = first;
    *top = second;
}

int main() {
    Stack* stack = NULL;

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Before swap:\n");
    print_stack(stack);

    swap_top(&stack);

    printf("After swap:\n");
    print_stack(stack);

    return 0;
}