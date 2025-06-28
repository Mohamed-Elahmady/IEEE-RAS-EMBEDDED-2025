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

void ll_add_beg(Node** head, int value) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = value;
    new_node->next = *head;
    *head = new_node;
}

void ll_delete_node(Node** head, int value) {
    if (*head == NULL) return;

    Node* current = *head;
    Node* prev = NULL;

    if (current->data == value) {
        *head = current->next;
        free(current);
        return;
    }

    while (current != NULL && current->data != value) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) return;

    prev->next = current->next;
    free(current);
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

    ll_add_beg(&head, 5);
    ll_add_beg(&head, 2);

    ll_delete_node(&head, 20);

    display_ll(head);

    return 0;
}