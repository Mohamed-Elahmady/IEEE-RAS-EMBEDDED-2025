#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void ll_add_end(Node** head, int value) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = value;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
        return;
    }

    Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = new_node;
}

void display_ll(Node* head) {
    int length = 0;
    Node* current = head;

    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
        length++;
    }
    printf("NULL\n");
    printf("Length: %d\n", length);
}

int main() {
    Node* head = NULL;

    ll_add_end(&head, 10);
    ll_add_end(&head, 20);
    ll_add_end(&head, 30);
    ll_add_end(&head, 40);

    display_ll(head);

    return 0;
}