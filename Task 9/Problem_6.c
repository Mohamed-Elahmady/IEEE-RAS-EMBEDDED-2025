#include <stdio.h>
#include <stdlib.h>

typedef struct CNode {
    int data;
    struct CNode* next;
} CNode;

void cll_add_pos(CNode** head, int value, int position) {
    CNode* new_node = (CNode*)malloc(sizeof(CNode));
    new_node->data = value;

    if (*head == NULL) {
        new_node->next = new_node;
        *head = new_node;
        return;
    }

    if (position == 0) {
        CNode* last = *head;
        while (last->next != *head) {
            last = last->next;
        }
        new_node->next = *head;
        last->next = new_node;
        *head = new_node;
        return;
    }

    CNode* current = *head;
    int index = 0;
    while (index < position - 1 && current->next != *head) {
        current = current->next;
        index++;
    }

    new_node->next = current->next;
    current->next = new_node;
}

void display_cll(CNode* head) {
    if (head == NULL) {
        printf("Circular Linked List is empty\n");
        return;
    }

    CNode* current = head;
    printf("Circular Linked List: ");
    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != head);
    printf("(back to head)\n");
}

int main() {
    CNode* head = NULL;

    cll_add_pos(&head, 10, 0);
    cll_add_pos(&head, 20, 1);
    cll_add_pos(&head, 30, 2);
    cll_add_pos(&head, 15, 1);

    display_cll(head);

    return 0;
}