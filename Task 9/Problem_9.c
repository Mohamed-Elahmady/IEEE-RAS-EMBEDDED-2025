#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    char data;
    struct Node* next;
} Node;

typedef struct {
    Node* front;
    Node* rear;
} Queue;

void enqueue(Queue* q, char value) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = value;
    new_node->next = NULL;

    if (q->rear == NULL) {
        q->front = q->rear = new_node;
        return;
    }

    q->rear->next = new_node;
    q->rear = new_node;
}

char dequeue(Queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty\n");
        return '\0';
    }

    Node* temp = q->front;
    char data = temp->data;
    q->front = q->front->next;

    if (q->front == NULL)
        q->rear = NULL;

    free(temp);
    return data;
}

void print_queue(Queue q) {
    Node* current = q.front;
    printf("Queue (front -> rear): ");
    while (current != NULL) {
        printf("%c -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    Queue q = {NULL, NULL};

    enqueue(&q, 'A');
    enqueue(&q, 'B');
    enqueue(&q, 'C');

    printf("Before dequeue:\n");
    print_queue(q);

    char removed = dequeue(&q);
    printf("Dequeued value: %c\n", removed);

    printf("After dequeue:\n");
    print_queue(q);

    return 0;
}