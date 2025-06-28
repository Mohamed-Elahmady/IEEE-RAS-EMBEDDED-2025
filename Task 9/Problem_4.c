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

int ll_get_node(Node* head, int position) {
    int index = 0;
    Node* current = head;

    while (current != NULL) {
        if (index == position)
            return current->data;
        current = current->next;
        index++;
    }

    return -1;
}

void ll_add_pos(Node** head, int value, int position) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = value;

    if (position == 0) {
        new_node->next = *head;
        *head = new_node;
        return;
    }

    Node* current = *head;
    int index = 0;

    while (current != NULL && index < position - 1) {
        current = current->next;
        index++;
    }

    if (current == NULL) return;

    new_node->next = current->next;
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

void ll_free(Node** head) {
    Node* current = *head;
    Node* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    *head = NULL;
}

int main() {
    Node* head = NULL;

    ll_add_end(&head, 10);
    ll_add_end(&head, 20);
    ll_add_end(&head, 30);
    ll_add_end(&head, 40);

    display_ll(head);

    ll_free(&head);
    printf("After Free:\n");
    display_ll(head);

    return 0;
}