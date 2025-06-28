#include <stdio.h>
#include <stdlib.h>

typedef struct DNode {
    int data;
    struct DNode* next;
    struct DNode* prev;
} DNode;

void dll_add_beg(DNode** head, int value) {
    DNode* new_node = (DNode*)malloc(sizeof(DNode));
    new_node->data = value;
    new_node->prev = NULL;
    new_node->next = *head;

    if (*head != NULL)
        (*head)->prev = new_node;

    *head = new_node;
}

void display_dll_forward(DNode* head) {
    DNode* current = head;
    printf("Doubly Linked List (forward): ");
    while (current != NULL) {
        printf("%d <-> ", current->data);
        if (current->next == NULL) break;
        current = current->next;
    }
    printf("NULL\n");
}

void display_dll_backward(DNode* tail) {
    DNode* current = tail;
    printf("Doubly Linked List (backward): ");
    while (current != NULL) {
        printf("%d <-> ", current->data);
        current = current->prev;
    }
    printf("NULL\n");
}

int main() {
    DNode* head = NULL;

    dll_add_beg(&head, 30);
    dll_add_beg(&head, 20);
    dll_add_beg(&head, 10);

    display_dll_forward(head);

    DNode* tail = head;
    while (tail && tail->next) tail = tail->next;
    display_dll_backward(tail);

    return 0;
}